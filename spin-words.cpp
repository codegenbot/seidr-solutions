#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += " ";
            i++;
        } else if(i + 4 >= str.length() || isalpha(str[i+4])) {
            for(int j = i; j <= (i+4); j++) {
                if(j < str.length())
                    result = str[j] + result;
                else
                    break;
            }
            i += 5;
        } else {
            for(int j = i; j < str.length(); j++) {
                result = str[j] + result;
            }
            i = str.length();
        }
    }
    return result;
}