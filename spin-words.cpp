#include <string>
using namespace std;

string spinWords(string s) {
    string result = "";
    string word = "";

    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            if(word.length() >= 5)
                reverse(word.begin(), word.end());
            result += word + " ";
            word = "";
        } else {
            word += s[i];
        }
    }

    // Handle the last word
    if(word.length() >= 5)
        reverse(word.begin(), word.end());
    result += word;

    return result;
}

int main() {
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    cout << spinWords(s1) << endl;
    cout << spinWords(s2) << endl;
    cout << spinWords(s3) << endl;
    cout << spinWords(s4) << endl;

    return 0;
}