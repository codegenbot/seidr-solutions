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
This problem gives a string and a number. The string represents a series of notes, and the number represents a note length. The program must return the string with all notes of the given length removed.
For example, a string of notes might be "ABCDEFG", and a note length to remove might be 3. The program should return "ABEFG", because the 3-length note "CDE" was removed.
input: 
ABCDEFG
3
output: 
ABEFG
input: 
ABCDEFG
1
output: 
BCDEFG
input: 
ABCDEFG
2
output: 
ACEG
input: 
ABCDEFG
7
output: 
ABCDEFG
input: 
ABCDEFG
5
output: 
ABCEF
input: 
ABCDEFG
8
output: 
ABCDEFG
input: 
ABCDEFG
6
output: 
ABCDFG
*/
int main() {
    string s1;
    int len;
    cin>>s1>>len;
    for(int i=0;i<s1.length();i++){
        if((i+1)%len!=0){
            cout<<s1[i];
        }
    }
    cout<<endl;
    return 0;
}
