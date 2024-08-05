#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i <= str.length()) {
        if(i+1 > str.length() || strlen(&str[i]) <= 4){
            result += str.substr(i);
            break;
        } else {
            result += (str.substr(i, strlen(&str[i]))).rreverse();
            i += strlen(&str[i]);
        }
    }
    return result;
}

int main() {
    // Your test cases
    cout << spinWords("a") << endl;  // should print a
    cout << spinWords("this is a test") << endl;  // should print this is a test
    cout << spinWords("this is another test") << endl;  // should print this is rehtona test
    cout << spinWords("hi") << endl;  // should print hi

    return 0;
}