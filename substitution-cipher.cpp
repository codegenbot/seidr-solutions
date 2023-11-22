#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipher1, string cipher2, string message) {
    string decipheredMessage = "";
    
    for (char c : message) {
        int index = cipher2.find(c);
        decipheredMessage += cipher1[index];
    }
    
    return decipheredMessage;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    string decipheredMessage = substitutionCipher(cipher1, cipher2, message);
    cout << decipheredMessage << endl;
    
    return 0;
}