```c++
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
                for(int k = word.length() - 1; k >= 0; k--) {
                    result += word[k];
                }
            } else {
                result += word;
            }
            i = j;
        }
    }
    return result;
}

int main() {
    string str;
    while(true) {
        cout << "Enter a sentence (or 'exit' to quit): ";
        getline(cin, str);
        if(str == "exit") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}