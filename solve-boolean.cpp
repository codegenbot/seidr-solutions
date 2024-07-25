#include <string>
using namespace std;

bool solveBoolean(string input) {
    bool res = true;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'f') {
            res = false;
            break;
        }
    }
    return res;
}

int main() {
    string input;
    cin >> input;
    cout << (solveBoolean(input) ? "True" : "False") << endl;
    return 0;
}