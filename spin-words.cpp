```c++
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "Hello World"; 
    string result = spinWords(str);
    cout << result << endl; 

    return 0;
}

string spinWords(string str) {
    string word = "";
    string result = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                result += word;
                word = std::string(word.rbegin(), word.rend());
                result += " ";
                word = "";
            } else {
                result += word + " ";
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        result += word;
        word = std::string(word.rbegin(), word.rend());
    } else {
        result += word;
    }

    return result;
}