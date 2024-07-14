#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    while ((pos = str.find(" ")) != string::npos) {
        size_t wordLength = str.substr(0, pos).length();
        if (wordLength >= 5) {
            for (size_t i = wordLength; i > 0; --i)
                result += str[pos - i].c_str();
        } else
            result += str.substr(0, pos);
        str.erase(0, pos + 1);
    }
    if (str.length() >= 5) {
        for (size_t i = str.length(); i > 0; --i)
            result += str[str.length() - i].c_str();
    } else
        result += str;
    return result;
}

int main(){
    string input;
    while(getline(cin, input)){
        cout << spinWords(input) << endl;
    }
    return 0;
}