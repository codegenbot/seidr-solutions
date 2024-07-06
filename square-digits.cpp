#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int number = atoi(argv[1]); // Convert command line argument to integer
    string result = "";
    while (number > 0) {
        int digit = number % 10;
        result = to_string(digit * digit) + result;
        number /= 10;
    }
    cout << "The squared digits of the given integer are: ";
    cout << result << endl;
    return 0;
}