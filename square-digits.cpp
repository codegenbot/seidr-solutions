#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int num = (int)(c - '0'); // convert char to int
        output += to_string(num * num); // square each digit and concatenate the squares into a returned string
    }
    return output;
}