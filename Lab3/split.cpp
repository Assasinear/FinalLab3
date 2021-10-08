#include <vector>
#include <string>

std::vector<std::string> split(std::string str, char separator) {
    std::vector<std::string> result = {};
    std::string w = "";
    for (auto x : str) {
        if (x == separator) {
            result.push_back(w);
            w = "";
        }
        else {
            w = w + x;
        }
    }
    result.push_back(w);
    return result;
}
