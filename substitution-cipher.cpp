#include <string>

namespace {

using namespace std;

string cipher(string cipher1, string cipher2, string input) {
    string result = "";
    for (char c : input) {
        size_t pos = cipher2.find(std::tolower(c));
        if (pos != string::npos) {
            char originalCase;
            if (isupper(c)) {
                originalCase = toupper(c);
            } else {
                originalCase = tolower(c);
            }
            size_t pos1 = std::find_if(cipher1.begin(), cipher1.end(),
                    [originalCase](char x) { return std::tolower(x) == std::tolower(originalCase); })
                    -> c_str() - cipher1.begin();
            result += cipher1[pos1];
        } else {
            result += c;
        }
    }
    return result;
}

}