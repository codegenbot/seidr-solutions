```
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    if (str.length() % 2 == 0) {
        return string(1, str[str.length() / 2 - 1]) + string(1, str[str.length() / 2]);
    } else {
        return string(1, str[str.length() / 2]);
    }
}
```