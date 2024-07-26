#include <string>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for(char c : input){
        int digit = (int)c - '0';
        result += to_string(digit * digit);
    }
    return result;
}