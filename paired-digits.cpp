#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = str.size() - 1; i >= 0; i--) {
        // Check if the current character is the same as the previous one
        if (str[i] == str[i + 1]) {
            // If it is, increment the count of consecutive occurrences
            int count = 1;
            for (int j = i - 1; j >= 0 && str[j] == str[j + 1]; j--) {
                count++;
            }
            
            // Add the value of the current character to the sum if it is greater than 1
            if (count > 1) {
                sum += str[i] - '0';
            }
        }
    }
    
    cout << "Sum of digit is: " << sum;
}