#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStartIndex = 0;
    for (int i = 0; i <= str.length(); i++) {
        if ((i == str.length()) || (str[i] == ' ')) {
            string word = str.substr(wordStartIndex, i - wordStartIndex);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            wordStartIndex = i + 1;
        }
    }
    return result;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Spin words: " << spinWords(str) << endl;
}