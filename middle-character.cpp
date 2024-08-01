```c++
#include <string>
using namespace std;

string middleCharacter(string str) {
    int len = str.length();
    if(len % 2 == 0) {
        return str.substr(len/2 - 1, 2);
    } else {
        return string(1, str[len/2]);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "The middle character is: " << middleCharacter(str) << endl;
    return 0;
}