#include "SimpleTemplateEngine.h"

nets::View::View(std::string patterno) {
    char word[64];
    int i = 0;
    for(const char n : patterno) {
        if (n != ' ') {
            word[i++] = n;
        } else {
            word[i] = '\0';
            i = 0;
            templati.emplace_back(std::string(word));
        }
    }
    word[i] = '\0';
    templati.emplace_back(std::string(word));
}

nets::View::~View() {
    templati.clear();
}

std::string nets::View::Render(const std::unordered_map<std::string, std::string> &model) const {
    std::unordered_map<std::string, std::string> model1 = model;

    enum mode {search = 0, check = 1, found = 2, authorisation = 3} m;
    std::string final = "", tempor, templa;
    int bracketsl = 0;
    bool first = true;

    for (std::string v : templati){
        m = search;
        tempor = "";
        templa = "";
        for(char n : v){
            if(m == search){
                if(n == '{'){
                    m = check;
                    bracketsl++;
                    continue;
                } else {
                    tempor += n;
                    continue;
                }
            }
            else if(m == check){
                if(n == '{'){
                    m = found;
                    bracketsl++;
                    continue;
                } else {
                    m = search;
                    tempor = tempor + '{' + n;
                    bracketsl = 0;
                    continue;
                }
            }
            else if(m == found){
                if(n == '{' && bracketsl == 2){
                    tempor += '{';
                    continue;
                }
                if(n == '}'){
                    m = authorisation;
                    bracketsl = 0;
                    continue;
                } else{
                    templa = templa + n;
                    bracketsl = 0;
                    continue;
                }
            }
            else { //authorisation, ostatnia mozliwa opcja
                if(n == '}'){
                    auto modo = model1.find(templa);
                    if(modo != model1.end()){
                        tempor += modo->second;
                    }
                    templa = "";
                    m = search;
                    continue;
                } else {
                    templa = templa + '}' + n;
                    m = found;
                    continue;
                }
            }
        }
        if(templa != ""){
            tempor = tempor + "{{" + templa;
            templa = "";
            bracketsl = 0;
            if(m == authorisation){
                tempor += '}';
            }
        }
        if(!first){
            final += ' ';
        } else first = false;

        final += tempor;
        tempor = "";
    }
    return final;
}