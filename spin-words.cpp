#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i <= str.length()) {
        if(str.substr(i).find(" ") != string::npos || i >= str.length()) {
            string word = str.substr(i);
            if(word.length() >= 5)
                reverse(word.begin(), word.end());
            result += word + " ";
            i += word.length() + 1;
        }
    }
    return result.substr(0, result.length()-1);
}

int main() {
    // Test cases
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi
    
    return 0;
}