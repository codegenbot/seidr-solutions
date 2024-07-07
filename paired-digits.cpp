#include <iostream>
#include <string>
using namespace std;
int main() {
    int sum = 0;
    
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int temp = 0; // temporary variable to keep track of the number of times a digit has been seen before
    
    for (int i = str.size() - 1, j = 0; i >= 0; i--, j++) {
        if (str[i] == str[j]) {
            temp++; // increment temporary variable by 1
            
            // add the value of the temporary variable to the sum only if it is greater than 0
            if (temp > 0) {
                sum += str[i] - '0';
                if (str[j] == str[i-1]) {
                    temp++; // increment again for the next repeated digit
                }
            }
        } else {
            temp = 0; // reset temporary variable to 0 for the next iteration
        }
    }
    
    cout << "Sum of digit is: " << sum;
}