Here is the solution:

#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            wordStart = i + 1;
        }
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    // test cases
    cout << spinWords("a") << endl;  // a
    cout << spinWords("this is a test") << endl;  // this is a test
    cout << spinWords("this is another test") << endl;  // this is rehtona test
    cout << spinWords("hi") << endl;  // hi

    return 0;
}