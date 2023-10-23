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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
int main() {
    string str = "write: ";
    cin>>str;
    int word = 0;
    int letter =0;
    int index = 0;
    vector<string> vec;
    for (int i = 0; i < str.size(); i++) {
        if(str[i] != ':'){
            if(str[i] != ' '){ //count word
                letter++;
            }else{
                word++;
                string newWord = str.substr(index, letter);
                vec.push_back(newWord);
                letter = 0;
                index = i;
            }
        }
    }
    
    if(letter > 0){
        word++;
        string newWord = str.substr(index, letter);
        vec.push_back(newWord);
    }
    for (int i = 0; i < vec.size(); i++) {
        string temp = vec[i];
        if(temp.size() >= 5){
            reverse(temp.begin(), temp.end());
            vec[i] = temp;
        }
    }
    string ans = "";
    for (int i = 0; i < vec.size(); i++) {
        if(i != vec.size()-1){
            ans += vec[i]+' ';
        }else{
            ans += vec[i];
        }
    }
    cout<<"output: "<<ans<<endl;
    return 0;
}
//output: write
