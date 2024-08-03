Here's the modified code:

```cpp
#include <iostream>
#include <string>
#include <vector> 
using namespace std;

string spinWords(string str) {
    vector<string> words;
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            words.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    string result;
    for (auto word : words) {
        if (word.length() >= 5)
            result += string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    cout << spinWords("a") << endl;
    cout << spinWords("this is a test") << endl;
    cout << spinWords("this is another test") << endl;
    cout << spinWords("hi") << endl;
    return 0;
}