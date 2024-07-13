#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(result.length(), i - result.length());
            if (word.length() >= 5)
                result.append(string(word.rbegin(), word.rend()).append(" "));
            else
                result.append(word).append(" ");
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
}