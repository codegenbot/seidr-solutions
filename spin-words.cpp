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
Given a string of one or more words (separated by spaces), reverse all of the words that are five or more letters long and return the resulting string. 
For example,

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

This is a test
sihT is a test

This is another test
sihT is rehtona test
*/
int main() {
    char str[100];
    cin.getline(str, 100);
    int len = strlen(str);
    char *ptr = str;
    char *prev = ptr;
    char *end = ptr;
    while(ptr < str+len){
        if(*ptr == ' ' || *ptr == '\0'){
            end = ptr-1;
            if(ptr-prev-1 >= 5)
                while(prev < end){
                    swap(*prev, *end);
                    prev++;
                    end--;
                }
            prev = ptr+1;
        }
        ptr++;
    }
    cout << str << endl;
    return 0;
}
