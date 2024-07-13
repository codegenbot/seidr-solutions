#include <string>

string squareDigits(string input) {
    string result = "";
    for(int i=0; i<input.length();i++){
        int digit = (input[i]-'0') * (input[i]-'0');
        char c = (char)(digit + '0'); 
        result += c;
    }
    return result;
}