#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int count = 0;
    
    for(int i=0; i<input.length(); i++) {
        if(input[i] == ' ') {
            count = 0;
            output += " ";
        } else {
            count++;
            if(count >= 5) {
                for(int j=count-1; j>=0; j--) {
                    output += input[i-j];
                }
            } else {
                output += input[i];
            }
        }
    }

    return output;
}

int main() {
    string s;
    while (cin >> s) {
        cout << spinWords(s) << endl;
    }
    return 0;
}