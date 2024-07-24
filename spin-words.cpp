#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += str.substr(i, 1);
            i++;
        } else if(i >= str.length() - 4) { 
            for(int j=i; j>=i && j >= (str.length()-5); j--) {
                result += str[j];
            }
            i = str.length();
        } else if(str.length() - i > 4) {
            for(int j=i; j>=i && j < i + 5; j--) {
                result += str[j];
            }
            i += 5;
        } else {
            result += str[i];
            i++;
        }
    }

    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;          // Output: a
    cout << spinWords("this is a test") << endl;  // Output: this is a test
    cout << spinWords("this is another test") << endl;  // Output: this is rehtona test
    cout << spinWords("hi") << endl;          // Output: hi

    return 0;
}