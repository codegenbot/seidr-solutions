```cpp
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i <= str.length(); i++) { 
        if (i == str.length()) {
            if (word.length() >= 5) { 
                string temp = ""; 
                for (int j = word.length() - 1; j >= 0; j--)
                    temp += word[j];
                result += temp;
            } else
                result += word;
            word = "";
        } else if (str[i] == ' ') {
            if (word.length() >= 5) { 
                string temp = ""; 
                for (int j = word.length() - 1; j >= 0; j--)
                    temp += word[j];
                result += temp + " ";
                word = "";
            } else
                result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    return result;
}