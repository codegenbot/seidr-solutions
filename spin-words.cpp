Here is the completed code:

#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str.find(" ", i) == string::npos || str.find(" ", i) > i + 4) {
            result += str.substr(i);
            i = str.find(" ", i);
            if (i != string::npos) {
                result += " ";
            }
        } else {
            int j = str.find(" ", i);
            string word = str.substr(i, j - i);
            result += word;
            i = j + 1;
        }
    }
    
    return result;
}