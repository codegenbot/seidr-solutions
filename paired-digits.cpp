#include <iostream>
using namespace std;

int sumPairedDigits(string str) {
    int current = 0, sum = 0;
    for(int i=0; i < str.length() - 1; i++) { 
        current = current * 10 + (str[i] - '0'); 
        if(str[i] == str[i+1]) {
            sum += current;
            current = 0;
        }
    }
    return sum;
}

int main() {
    string input;
    cin >> input; // read input from user
    cout << sumPairedDigits(input) << endl; // output the result
    return 0;
}