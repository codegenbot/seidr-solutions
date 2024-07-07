#include <iostream>
#include <string>
using namespace std;
int main() {
    int sum = 0;
    
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = str.size() - 2, j = 0; i >= 0; i--, j++) {
        if (str[i] == str[j]) {
            sum += str[i] - '0';
        }
    }
    
    cout << "Sum of digit is: " << sum;
}