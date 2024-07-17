#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = i;
            while(j < str.length() && str[j] != ' ') {
                j++;
            }
            string word = str.substr(i, j - i);
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            i = j;
        }
    }
    return result.substr(0, result.length()-1);
}

int main() {
    string s;
    while(getline(cin, s)) {
        cout << spinWords(s) << endl;
    }
    return 0;
}