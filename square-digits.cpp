#include <iostream>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = (input[i] - '0') * (input[i] - '0');
        char temp = ('0' + digit % 10);
        while(digit > 9){
            digit /= 10;
            temp = ('0' + digit % 10) + temp;
        }
        result += temp;
    }
    return result;
}

int main() {
    cout << squareDigits("0") << endl;  
    cout << squareDigits("1") << endl; 
    cout << squareDigits("2") << endl; 
    cout << squareDigits("3") << endl; 
    cout << squareDigits("4") << endl; 
    return 0;
}