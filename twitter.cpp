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
/*
Given a string representing a tweet, validate whether the tweet meets Twitter’s original character requirements. If the tweet has more than 140 characters, return the string "Too many characters". If the tweet is empty, return the string "You didn't type anything". Otherwise, return "Your tweet has X characters", where the X is the number of characters in the tweet.
For example,
input:

output:
You didn't type anything
input:
1
output:
Your tweet has 1 characters
input:
max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it
output:
Your tweet has 140 characters
input:
40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)
output:
Your tweet has 90 characters
input:
Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1
output:
Too many characters
*/
int main() {
    string input;
    getline(cin, input);
    if (input.size() == 0) {
        cout << "You didn't type anything" << endl;
        return 0;
    }
    int i = 0;
    while (i < input.size()) {
        if (!isalpha(input[i]) && !isspace(input[i])) {
            input.erase(i, 1);
            continue;
        }
        i++;
    }
    if (input.size() > 140) {
        cout << "Too many characters" << endl;
        return 0;
    }
    cout << "Your tweet has " << input.size() << " characters" << endl;
    return 0;
}
