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
*/
int main() {
    string input;
    while (getline(cin, input)) {
        string output;
        int index = 0;
        while (index < input.size()) {
            if (input[index] == ' ') {
                output += ' ';
                index++;
            }
            else {
                int j = index;
                while (j < input.size() && input[j] != ' ') {
                    j++;
                }
                if (j - index >= 5) {
                    for (int k = j - 1; k >= index; k--) {
                        output += input[k];
                    }
                }
                else {
                    for (int k = index; k < j; k++) {
                        output += input[k];
                    }
                }
                index = j;
            }
        }
        cout << output << endl;
    }
    return 0;
}
