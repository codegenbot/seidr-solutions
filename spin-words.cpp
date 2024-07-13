#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += sentence[i];
        }
    }
    
    result += word;
    
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            int j = i+1;
            while(j < result.length() && result[j] != ' ')
                j++;
            string temp = result.substr(i+1,j-i-1);
            reverse(temp.begin(),temp.end());
            result.replace(i+1, j-i, temp);
            i = j;
        }
    }
    
    return result;
}