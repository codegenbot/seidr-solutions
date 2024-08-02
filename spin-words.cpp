#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += str[i];
        }
    }
    result += word;
    
    int j = 0;
    while (j < result.length()) {
        if (result[j] == ' ' || j == result.length() - 1) {
            for (int k = j + 1; k <= j; k++) {
                if (k >= j && (j > 4)) {
                    char temp = result[k];
                    int pos = k;
                    while(pos < result.length() && pos > j) {
                        result[pos] = result[pos-1];
                        pos--;
                    }
                    result[j] = temp;
                }
            }
            j++;
        } else {
            j++;
        }
    }
    
    return result;
}