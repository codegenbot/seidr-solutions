Here's the modified code:

```cpp
using namespace std;

string spinWords(string str) {
    stringstream result;
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result << " ";
            i++;
        } else {
            int j = i;
            while (j < str.length() && str[j] != ' ') {
                j++;
            }
            string word = str.substr(i, j - i);
            if (word.length() >= 5) {
                string revWord = "";
                for (int k = word.length() - 1; k >= 0; k--) {
                    revWord += word[k];
                }
                result << revWord << " ";
            } else {
                result << word << " ";
            }
            i = j;
        }
    }
    return result.str();
}