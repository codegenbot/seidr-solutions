#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == str[i + 1]) {
            int count = 1;
            for (int j = i - 1; j >= 0 && str[j] == str[j + 1]; j--) {
                count++;
            }
            
            if (count > 1) {
                sum += str[i] - '0';
            }
        }
    }
    
    cout << "Sum of digit is: " << sum;
}