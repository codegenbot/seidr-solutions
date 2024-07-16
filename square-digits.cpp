#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input; 

    int result = 1; 
    for(int i = 0; i < input.length(); i++) { 
        char c = input[i]; 
        int square = (c - '0') * (c - '0'); 
        result *= 10 + c; 
    }

    cout << "Squared digits: " << result << endl;
    
    return 0;
}