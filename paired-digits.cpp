#include <iostream>
using namespace std;

int sumPairedDigits(string str) {
    int sum = 0;
    for(int i=1; i <= str.length() - 1; i++) { 
        if((str[i-1] - '0') == (str[i] - '0')) { 
            sum += (str[i-1] - '0') + (str[i] - '0'); 
        }
    }
    return sum;
}

int main() {
    string input;
    cin >> input; 
    cout << "Sum of paired digits: " << sumPairedDigits(input) << endl; 
    if (input.length() < 2) {
        cout << "Error: Input must be at least two characters long." << endl;
    }
    return 0;
}