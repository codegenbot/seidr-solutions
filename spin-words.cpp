Here is the modified code:

using namespace std;

string spinWords(string input) {
    string result = "";
    int i = 0;
    while (i < input.length()) {
        if (input[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = i;
            while (j < input.length() && input[j] != ' ') {
                j++;
            }
            string word = input.substr(i, j - i);
            if (word.length() >= 5) {
                std::string revWord = "";
                for (int k = word.length() - 1; k >= 0; k--) {
                    revWord += word[k];
                }
                result += revWord + " ";
            } else {
                result += word + " ";
            }
            i = j;
        }
    }
    return result;