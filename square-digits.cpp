
#include <iostream>
#include <string>

using namespace std;

// define the squareDigits function
string squareDigits(int number) {
    string result;
    while (number > 0) {
        int digit = number % 10;
        result += to_string(digit * digit);
        number /= 10;
    }
    return result;
}

int main(int argc, char** argv) {
    int number = atoi(argv[1]); // get input from user
    string result = squareDigits(number); // call the function to square digits and concatenate them into a string
    cout << result << endl; // print the result to console
}