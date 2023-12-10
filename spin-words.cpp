#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

vector<string> spinWords(string input) {
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    return words;
}

int main() {
    string input;
    getline(cin, input);
    vector<string> output = spinWords(input);
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    return 0;
}