#include <string>
#include <iostream>

using namespace std;

string squareDigits(string input) {
    string output;
    for (char c : to_string(stoi(input))) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num; 
    try{
    string output = squareDigits(to_string(num));
    cout << "Squared digits: " << output << endl;
    }catch(...){
        cerr << "Error: Please enter a valid number." << endl;
    }
    return 0;
}