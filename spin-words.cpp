#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while (i <= str.length()) {
        if(str.find(" ", i) == -1){
            if (str.length() >= 5) {
                string word = str.substr(i);
                reverse(word.begin(), word.end());
                result += word + " ";
            } else {
                result += str;
            }
            break;
        }
        
        string word = str.substr(i, str.find(" ", i) - i);
        if (word.length() >= 5) {
            string revWord = word;
            reverse(revWord.begin(), revWord.end());
            result += revWord + " ";
        } else {
            result += word + " ";
        }
        
        i = str.find(" ", i) + 1;
    }

    return result;
}

int main() {
    cout << spinWords("this is a test") << endl;
    return 0;
}