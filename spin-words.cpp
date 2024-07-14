#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += " ";
            i++;
        } else if(i + 4 >= str.length() || isalpha(str[i+4]) == 0) {
            result += str.substr(i);
            break;
        } else {
            int j = i + 4;
            while(isalpha(str[j])) j--;
            string temp = str.substr(i, j - i + 1);
            reverse(temp.begin(), temp.end());
            result += temp;
            i = j + 1;
        }
    }
    
    return result;
}