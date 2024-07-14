Here is the solution:

#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int length = 0;
    for (int i = sentence.length() - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            result += " ";
            length = 0;
        } else {
            result += sentence[i];
            length++;
            if (length > 4) {
                break;
            }
        }
    }

    return result;
}