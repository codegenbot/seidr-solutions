```
#include <string>
using namespace std;

int main() {
    string str = "hello";
    cout << middleCharacter(str) << endl;
    return 0;
}

string middleCharacter(string str) {
    if (str.length() % 2 == 0) {
        return str.substr((str.length() / 2) - 1, 2);
    } else {
        return str.substr(str.length() / 2, 1);
    }
}
```