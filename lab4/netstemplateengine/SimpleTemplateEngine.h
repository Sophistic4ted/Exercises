#ifndef JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
#define JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H

#include <string>
#include <vector>
#include <unordered_map>

namespace nets{
    class View {
    public:
        View(std::string patterno);
        ~View();

        std::string Render(const std::unordered_map <std::string, std::string> &model) const;

    private:
        std::vector<std::string> templati;
    };}
/*w konstruktorze zrob tablice stringow,
 * regexem search bedziesz przy renderingu przeszukiwal
 * tablice i podmienial,
 * jak podmienisz to do nowej tablicy stringow, zeby injection przeszlo,
 * jak  jakiegos nie wykorzystasz, to za niego podmienisz pusty string*/

#endif //JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H