#include <iostream>
#include <string>

using namespace std;

int squareDigits(int number) {
    string result = "";
    while (number > 0) {
        int digit = number % 10;
        result += to_string(digit * digit);
        number /= 10;
    }
    return result;
}

int main() {
    int number = atoi(argv[1]); // get input from user
    string result = squareDigits(number); // call the function to square digits and concatenate them into a string
    std::cout << result << std::endl; // print the result to console using the correct namespace qualifiers
}