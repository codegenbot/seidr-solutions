#include <iostream>
using namespace std;

int sumPairedDigits(string str) {
    int sum = 0;
    for(int i=0; i < str.length() - 1 && (i == str.length() - 2 || str[i] == str[i+1]); i++) { 
        if(str[i] == str[i+1]) { 
            sum += int(str[i]) + int(str[i+1]); 
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