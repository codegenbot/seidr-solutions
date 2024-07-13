#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit =stoi(string(1, c)); 
        output += to_string(digit * digit);
    }
    return output;
}