#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    if (input == "T" || input == "t") {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}