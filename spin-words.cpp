#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string sentence) {
    string result = "";
    string temp = "";

    for(int i=0; i<sentence.length(); i++) {
        char c = sentence[i];
        if(c == ' ') {
            if(temp.length() >= 5)
                reverse(temp.begin(), temp.end());
            result += temp + " ";
            temp = "";
        } else {
            temp += c;
        }
    }

    if(temp.length() >= 5)
        reverse(temp.begin(), temp.end());

    result += temp;

    return result;
}

int main() {
    cout << spinWords("a") << std::endl; // Output: a
    cout << spinWords("this is a test") << std::endl; // Output: this is a tset
    cout << spinWords("hi") << std::endl; // Output: hi