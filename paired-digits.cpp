#include <iostream>
using namespace std;

int sumPairedDigits(string str) {
    int sum = 0;
    for(int i=0; i < str.length() - 1; i++) { 
        if(str[i] == str[i+1]) { 
            sum += '0' + str[i] + '0' + str[i+1]; 
        }
    }
    return sum;
}

int main() {
    string input;
    cin >> input; // read input from user
    cout << "Sum of paired digits: " << sumPairedDigits(input) << endl; // output the result
    if (input.length() < 2) {
        cout << "Error: Input must be at least two characters long." << endl;
    }
    return 0;
}