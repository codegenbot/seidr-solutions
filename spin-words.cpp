Here is the modified code:

```c++
#include <string>
#include <algorithm>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            word = str.substr(i);
            if (word.length() >= 5)
                reverse(word.begin(), word.end());
            result += word + " ";
        }
    }
    return result;
}