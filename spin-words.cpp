#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i <= str.length()) {
        if (str.find(" ", i) == -1 || i + 1 >= str.length())
            result += str.substr(i);
        else {
            string word = str.substr(i, str.find(" ", i) - i);
            if (word.length() >= 5)
                for (int j = word.length() - 1; j >= 0; --j)
                    result += word[j];
            else
                result += word;
        }
        i = str.find(" ", i) + 1;
    }
    return result;
}