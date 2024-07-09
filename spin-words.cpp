Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if ((i == str.length() || isspace(str[i])) && str.substr(i - (i > 0), i - (i > 0)).length() >= 5) {
            reverse(str.substr(i - (i > 0), i - (i > 0)).begin(), str.substr(i - (i > 0), i - (i > 0)).end());
        }
        result += str[i];
    }
    return result;
}

int main() {
    cout << spinWords("a") << endl; // Should print "a"
    cout << spinWords("this is a test") << endl; // Should print "this is a test"
    cout << spinWords("this is another test") << endl; // Should print "this is rehtona test"
    cout << spinWords("hi") << endl; // Should print "hi"
    return 0;
}