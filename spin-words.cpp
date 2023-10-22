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
    string s = "";
    string s1 = "";
    int flag = 0;
    while(getline(cin,s)){
        for(int i = 0; i<s.length();i++){
            if(s[i]==' '){
                flag++;
                int j;
                for(j=i-1;j>=0;j--){
                    if(s[j]==' '){
                        break;
                    }
                }
                int len = i-1-j;
                if(len>=5){
                    reverse(s.begin()+j+1, s.begin()+i);
                }
            }
            else if(i==s.length()-1){
                int j;
                for(j=i;s[j]!=' '&&j>=0;j--);
                int len = i-j;
                if(len>=5){
                    reverse(s.begin()+j+1, s.begin()+i+1);
                }
            }
            if(flag)cout<<" ";
            cout<<s[i];
        }
        cout<<endl;
    }


    return 0;
}
