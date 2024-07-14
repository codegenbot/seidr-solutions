#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += word[::-1] + " ";
            else
                result += word + " ";
            word.clear();
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5)
        result += word[::-1];
    else
        result += word;

    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}