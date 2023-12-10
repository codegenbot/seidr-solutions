#include <string>
using namespace std;

string getMiddleCharacter(string input) {
    int length = input.length();
    if (length % 2 == 0) {
        return input.substr((length / 2) - 1, 2);
    } else {
        return input.substr(length / 2, 1);
    }
}

int main() {
    string input;
    cin >> input;
    cout << getMiddleCharacter(input) << endl;
    return 0;
}