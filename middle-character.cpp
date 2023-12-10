
Here is the modified code:
```
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    cout << middleCharacter(input) << endl;
    return 0;
}

string middleCharacter(string str) {
    int len = str.length();
    if (len % 2 == 0) {
        return str.substr((len / 2) - 1, 2);
    } else {
        return str.substr(len / 2, 1);
    }
}
```