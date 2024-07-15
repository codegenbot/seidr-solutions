#include <string>
using namespace std;

string middleCharacter(string str) {
    int length = str.length();
    if (length % 2 == 0) {
        return string(1, str[length / 2 - 1]) + string(1, str[length / 2]);
    } else {
        return string(1, str[length / 2]);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = middleCharacter(input);
    cout << "Middle character(s): " << result << endl;
    return 0;