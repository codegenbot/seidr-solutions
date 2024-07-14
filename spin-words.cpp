#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    string temp;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            result += str.substr(i-wordLength+1,wordLength-1);
            temp = "";
            wordLength = 0;
        } else {
            temp += str[i];
            wordLength++;
        }
    }

    // Add the last word
    result += temp;

    for(int i=0; i<result.length(); i++) {
        if(result[i] == ' ') {
            int j=i+1;
            while(j < result.length() && result[j] != ' ')
                j++;
            string rev = result.substr(i+1,j-i-1);
            reverse(rev.begin(), rev.end());
            result.replace(i+1, j-i, rev);
            i = j;
        }
    }

    return result;
}