#include <string>
using namespace std;
int main() {
    string str = "hello"; // replace with the input string
    cout << middleCharacter(str) << endl;
}

string middleCharacter(string str) {
    if (str.length() % 2 == 0) {
        return str.substr((str.length() / 2) - 1, 2);
    } else {
        return str.substr(str.length() / 2, 1);
    }
}