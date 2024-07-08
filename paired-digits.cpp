#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int sum = 0;
    for (int i = 1; i < str.size(); i += 2) {
        if (str[i] == str[i-1]) {
            sum += str[i] - '0';
        }
    }
    
    cout << "Sum of digit is: " << sum;
}