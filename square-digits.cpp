#include <iostream>
using namespace std;

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