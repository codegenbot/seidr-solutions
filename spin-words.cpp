Here is the solution:

#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    
    for(int i=0; i<str.length();i++){
        if(str[i] == ' '){
            if(length >= 5) {
                reverse(result.rbegin(),result.rend());
                result += " ";
            }
            else {
                result += " ";
            }
            length = 0;
            result += str.substr(i-length, i);
        }else{
            length++;
            result += str[i];
        }
    }
    
    if(length >= 5) {
        reverse(result.rbegin(),result.rend());
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Result: " << spinWords(str) << endl;
    return 0;
}