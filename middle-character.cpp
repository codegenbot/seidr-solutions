```c++
#include <string>
using namespace std;

string middleCharacter(string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2);
    } else {
        return s.substr(len / 2, 1);
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "The middle character is: " << middleCharacter(s) << endl;
    return 0;
}