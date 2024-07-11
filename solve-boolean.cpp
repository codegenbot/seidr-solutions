#include <iostream>
#include <string>
using namespace std;

int main() {
    string expr;
    cin >> expr;

    if (expr == "t") {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}