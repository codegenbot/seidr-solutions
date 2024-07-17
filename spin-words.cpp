#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    result += word;

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ' && i > 4) {
            string temp = result.substr(i+1);
            reverse(temp.begin(), temp.end());
            result = result.substr(0, i+1) + temp;
        }
    }

    return result;
}

int main() {
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi
    return 0;
}