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
            int j = i;
            while (j < output.length() - 1 && isalpha(output[j + 1])) j++;
            
            if (strlen(&output[i]) >= 5) {
                for (int k = j; k >= i; k--) {
                    output[k] = output[k];
                }
            }
            i = j;
        }
    }

    return output;
}