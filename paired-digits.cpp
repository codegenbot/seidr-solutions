#include <iostream>
#include <string>
using namespace std;
int main() {
    int sum = 0;
    
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int temp = 0; // temporary variable to keep track of the number of times a digit has been seen before
    int count = 0; // variable to keep track of consecutive occurrences of the current digit
    
    for (int i = str.size() - 1, j = 0; i >= 0; i--, j++) {
        if (str[i] == str[j]) {
            temp++; // increment temporary variable by 1
            
            // add the value of the temporary variable to the sum only if it is greater than 0
            if (temp > 0) {
                count = temp; // update the consecutive occurrence counter
                sum += str[i] - '0';
            }
        } else {
            temp = 0; // reset temporary variable to 0 for the next iteration
            count = 0; // reset the consecutive occurrence counter
        }
    }
    
    cout << "Sum of digit is: " << sum;
}