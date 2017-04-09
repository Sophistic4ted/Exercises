#include <iostream>
#include "SimpleTemplateEngine.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    nets::View a = nets::View("My name is {{surname}}, {{name}} {{surname}}."
                                      "You can't change {{me}, my mutables are {{{s_t_a_t_e}}} "
                                      "I won't tell you {{anything}} "
                                      "My number is {{12g}} "
                                      "Injection test {{namo}} {{surnam0}}.");

    const std::unordered_map<string, string> data = {
            {"name", "James"},
            {"surname", "Bond"},
            {"s_t_a_t_e", "private"},
            {"12g", "007"},
            {"namo", "{{surnam0}}"},
            {"surnam0", "{{namo}}"}
    };

    cout << a.Render(data);

    return 0;
}