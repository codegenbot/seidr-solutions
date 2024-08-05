```c++
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string input) {
    string output = "";
    int i = 0;
    while (i < input.length()) {
        if (input[i] == ' ') {
            output += " ";
            i++;
        } else {
            int j = i;
            while (j < input.length() && input[j] != ' ') {
                j++;
            }
            string word = input.substr(i, j - i);
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            output += word;
            i = j;
        }
    }
    return output;
}

int main() {
    // Read the input from user
    string input;
    cin >> input;

    // Call the function and print the output
    cout << spinWords(input) << endl;

    return 0;
}