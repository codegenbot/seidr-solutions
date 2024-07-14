#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    string word;
    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            output += word + " ";
            word = "";
        } else {
            word += input[i];
        }
    }
    
    output += word;
    
    for (int i = 0; i < output.length(); i++) {
        if ((output[i] >= 'a' && output[i] <= 'z') || (output[i] >= 'A' && output[i] <= 'Z')) {
            int j = i + 1;
            while (j < output.length() && (!isalnum(output[j])) && (output[j] != ' ')) {
                j++;
            }
            if (j - i > 4) {
                for (; i < j; i++) {
                    output[i] = output[j - i - 1];
                }
            }
        }
    }
    
    return output;
}