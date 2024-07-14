Here is the solution:

#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += " ";
            i++;
        } else if(i+4 >= str.length() || str.substr(i,5).find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos) {
            //if the word is 5 or more characters long, reverse it
            int j = i + str.find_last_of(' ') - i;
            for(int k = 0; k < (j+1)/2; k++) {
                char temp = str[i+k];
                str[i+k] = str[j-k];
                str[j-k] = temp;
            }
            result += str.substr(i,j+1) + " ";
            i = j + 1;
        } else {
            result += str.substr(i,5) + " ";
            i += 5;
        }
    }
    
    return result;
}