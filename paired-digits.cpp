#include <iostream>
using namespace std;

int sumPairedDigits(string str) {
    int sum = 0;
    for(int i=0; i < str.length() - 1; i++) { 
        if(str[i] == str[i+1]) { 
            sum += (str[i]-'0'); 
            break; 
        }
    }
    return sum;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Sum of paired digits is: " << sumPairedDigits(s);
    return 0;
}