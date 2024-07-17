#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    size_t prevPos = 0;
    for (size_t pos = 0; pos <= sentence.length(); ++pos) {
        if (pos == sentence.length() || isspace(sentence[pos])) {
            string word = sentence.substr(prevPos, pos - prevPos);
            if (word.length() >= 5)
                result += string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            prevPos = pos + 1;
        }
    }
    return result.substr(0, result.length() - 1); // remove the extra space at the end
}