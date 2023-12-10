#include <string>
#include <iostream>

using namespace std;

string spinWords(string input) {
    string output = "";
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != ' ') {
            string word = "";
            while (i < input.size() && input[i] != ' ') {
                word += input[i];
                i++;
            }
            if (word.size() >= 5) {
                output += reverse(word);
            } else {
                output += word;
            }
        }
    }
    return output;
}

int main() {
    string input = "this is another test";
    cout << spinWords(input) << endl;
    return 0;
}