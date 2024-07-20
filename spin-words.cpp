#include <iostream>
#include <string>

using namespace std;

std::string spinWords(std::string str) {
    std::string result;
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            word = "";
        } 
        else 
            word += c;
    }

    if (word.length() >= 5)
        result += string(word.rbegin(), word.rend());
    else
        result += word;

    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        getline(cin, str);
        if (str == "exit") break;
        cout << "Spin words: " << spinWords(str) << endl;
    }
}