Here's the solution:

#include <string>
#include <vector>
using namespace std;

string spinWords(string str) {
    vector<string> words;
    string word = "";
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--)
                    cout << word[j];
                cout << " ";
            } else
                cout << word << " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    
    return str;
}