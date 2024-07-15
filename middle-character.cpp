#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int length = input.length();
    if (length % 2 == 0) {
        return string(1, input[length / 2 - 1]) + string(1, input[length / 2]);
    } else {
        return string(1, input[length / 2]);
    }
}