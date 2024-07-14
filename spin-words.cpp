#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    int i = 0;
    
    while(i < input.length()) {
        if(input[i] == ' ') {
            output += " ";
            i++;
        } else {
            int j = i + 1;
            
            // find the space or the end of the string
            while(j <= input.length() && input[j] != ' ' && j < input.length()) {
                j++;
            }
            
            // check if the word is more than 4 characters
            if((j - i) > 5) {
                for(int k = j - 1; k >= i; k--) {
                    output += input[k];
                }
            } else {
                while(i < j) {
                    output += input[i];
                    i++;
                }
            }
        }
    }
    
    return output;
}