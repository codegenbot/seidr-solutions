Here is the solution:

#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    int start = 0;
    for(int i=0; i<=input.length(); i++) {
        if(i == input.length() || input[i] == ' ') {
            string word = input.substr(start, i-start);
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            start = i+1;
        }
    }
    return output;
}