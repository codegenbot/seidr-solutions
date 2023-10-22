#include <string>
#include <iostream>
#include <vector>
using namespace std;
/*
Given an array of integers, return a new array where each element in the new array is the number of smaller elements to the right of that element in the original input array.
For example, given the array [3, 4, 9, 6, 1], return [1, 1, 2, 1, 0], since:
There is 1 smaller element to the right of 3
There is 1 smaller element to the right of 4
There are 2 smaller elements to the right of 9
There is 1 smaller element to the right of 6
There are no smaller elements to the right of 1
For example,
[3, 4, 9, 6, 1] => [1, 1, 2, 1, 0]
*/

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void reverseWord(string& word) {
    for(int i = 0; i < word.size() / 2; i++) {
        swap(word[i], word[word.size()-1-i]);
    }
}

void reverseWords(string& s) {
    int start = 0;
    int end = 0;
    const int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == ' ') {
            end = i;
            reverseWord(s.substr(start, end - start));
            start = end + 1;
        }
    }
    // deal with the last word since no trailing spaces
    reverseWord(s.substr(start));
    reverse(s.begin(), s.end());
}

int main() {
    string s = "I am a fucking gay";
    reverseWords(s);
    cout << s << endl;
    return 0;
}
