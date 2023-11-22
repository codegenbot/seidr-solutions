#include <iostream>
#include <string>

using namespace std;

string substitutionCipher(string cipher1, string cipher2, string message) {
    string deciphered;
    for (char c : message) {
        int index = cipher2.find(c);
        deciphered += cipher1[index];
    }
    return deciphered;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    string result = substitutionCipher(cipher1, cipher2, message);
    cout << result << endl;
    
    return 0;
}