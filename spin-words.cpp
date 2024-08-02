#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for(int i = 0; i <= str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            start = i + 1;
        }
    }
    return result.substr(0, result.length()-1);
}

int main(){
    // Test cases
    cout << spinWords("a") << endl; // Should print: a
    cout << spinWords("this is a test") << endl; // Should print: this is a test
    cout << spinWords("this is another test") << endl; // Should print: this is rehtona test
    cout << spinWords("hi") << endl; // Should print: hi

    return 0;
}