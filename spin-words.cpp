#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    
    for(int i = 0; i <= str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            
            if(word.length() >= 5) {
                string revWord = "";
                for(int j = word.length() - 1; j >= 0; j--) {
                    revWord += word[j];
                }
                result += revWord + " ";
            } else {
                result += word + " ";
            }
            
            start = i + 1;
        }
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    // test cases
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi
    
    return 0;
}