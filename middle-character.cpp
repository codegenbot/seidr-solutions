```
#include <string>
using namespace std;

string middleCharacter(string s) {
    if (s.length() % 2 == 0) {
        return s.substr((s.length() / 2) - 1, 2);
    } else {
        return string(1, s[(s.length() / 2)]);
    }
}
```