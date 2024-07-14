Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += str.substr(i);
            i++;
            continue;
        }
        int j = i + 1;
        while (j <= str.length() && str[j-1] != ' ') {
            j++;
        }
        string word = str.substr(i, j - i - 1);
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
        i = j;
    }
    return result;
}

int main() {
    // You can test your function here
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}