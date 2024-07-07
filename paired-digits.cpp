#include <iostream>
#include <string>
using namespace std;
int main() {
    int sum = 0;
    
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = str.size() - 1, j = 0; i >= 0 && j < str.size(); i--, j++) {
        if (str[i] == str[j]) {
            sum += str[i] - '0';
        }
    }
    
    cout << "Sum of digit is: " << sum;
}