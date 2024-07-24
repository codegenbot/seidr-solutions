#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += str.substr(i,1) + " ";
            i++;
        } else if(i >= 4) {
            for(int j = i; j >= i-4 && j >= 0; j--) {
                result += str[j];
            }
            i++;
            while(i < str.length() && str[i] != ' ') {
                i++;
            }
        } else {
            result += str.substr(i,1);
            i++;
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}