```
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<string> words = splitString(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverseString(words[i]);
        }
    }
    string output = joinStrings(words, ' ');
    cout << output << endl;
    return 0;
}
```