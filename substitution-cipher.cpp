#include <string>
using namespace std;

string substitutionCipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = find(cipher1.begin(), cipher1.end(), message[i]) - cipher1.begin();
        if (index != string::npos)
            result += cipher2[index];
        else
            result += message[i];
    }
    return result;
}

int main() {
    // Your code to read input from user and print output
    // For example:
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << substitutionCipher(cipher1, cipher2, message) << endl;
    return 0;
}