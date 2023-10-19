#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
using namespace std;

// a is a test
// a is etsat
// "a" "is" "a" "test"
string reverseWords(string str) {
    int start = 0;
    int end = 0;
    int end2 = 0;
    int len = str.size();
    int wordLen = 0;
    int i = 0;
    while (i < len-1) {
        if (str[i] != ' ' && str[i+1] != ' ') {
            start = i;
            int j = start;
            while (str[j] != ' ') j++;
            end = j-1;
            end2 = j-1;
            int k = start;
            wordLen = 0;
            while (str[k] != ' ') {
                wordLen++;
                if (wordLen >= 5){
                    while (end2 < j - 1) {
                        swap(str[k], str[end2]);
                        k++;
                        end2--;
                    }
                }
                k++;
            }
            i = j;
        }
        i++;
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << reverseWords(str) << endl;
    return 0;
}
