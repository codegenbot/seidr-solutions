#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                for (int i = word.length() - 1; i >= 0; --i)
                    result += word[i];
            else
                result += word;
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        for (int i = word.length() - 1; i >= 0; --i)
            result += word[i];
    else
        result += word;

    return result;
}

int main() {
    string str1 = "Hello World";
    cout << spinWords(str1) << endl;
    
    string str2 = "This is a test";
    cout << spinWords(str2) << endl;
    
    string str3 = "";
    cout << spinWords(str3) << endl;
    
    string str4 = "a";
    cout << spinWords(str4) << endl;
    
    return 0;
}