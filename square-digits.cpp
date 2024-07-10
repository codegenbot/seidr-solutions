#include <string>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for(char c : input){
        int num = (int)(c - '0'); // convert char to integer
        result += to_string(num * num); // square each digit and concatenate
    }
    return result;
}