#include <vector>
#include <iostream>
#include <string>
using namespace std;

string squareDigits(int num) {
    string result = "";
    while (num > 0) {
        int digit = num % 10;
        result += to_string(digit * digit);
        num /= 10;
    }
    return result;
}

int main() {
    // Get the input number from the user
    int num;
    cin >> num;
    
    // Call the squareDigits function to get the squared digits string
    string result = squareDigits(num);
    
    // Print the result
    cout << "The squared digits of " << num << " are: " << result << endl;
    
    return 0;
}