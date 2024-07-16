#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    string word;
    
    for (char c : sentence) {
        if (c == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    result += word;
    
    int len;
    string revWord;
    
    for (string s : split(result, " ")) {
        len = s.length();
        
        if (len >= 5) {
            revWord = s;
            reverse(revWord.begin(), revWord.end());
            result = replace(result, s, revWord);
        }
    }
    
    return result;
}

string replace(string &str, string oldVal, string newVal) {
    size_t pos = 0;
    while((pos = str.find(oldVal)) != string::npos) {
        str.replace(pos, oldVal.length(), newVal);
        pos += newVal.length();
    }
    return str;
}

vector<string> split(const string &s, char delim) {
    vector<string> result;
    size_t pos = 0;
    size_t lastPos = s.find(delim);

    while (string::npos != lastPos) {
        result.push_back(s.substr(pos, lastPos - pos));
        pos = lastPos + 1;
        lastPos = s.find(delim, pos);
    }
    result.push_back(s.substr(pos));
    return result;
}

int main() {
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi
    return 0;
}