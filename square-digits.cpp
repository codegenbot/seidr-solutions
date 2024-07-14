#include <string>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int num = (int)c - '0'; // Convert char to integer
        result += to_string(num * num); // Square the number and add it to the result
    }
    return result;
}