```cpp
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (int i = 0; i < input.length(); i++) {
        if(isdigit(input[i])){ //check if the character is a digit
            int digit = input[i] - '0';
            result += to_string(digit * digit);
        }else{
            result += input[i]; //if not, just add it to the result as it is
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}