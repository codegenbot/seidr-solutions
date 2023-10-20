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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
 
output:
 
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
*/
int main() {
    char str[1000];
    while(scanf("%s",str) != EOF){
        int length = strlen(str);
        if(length % 2 == 0){
            printf("%c%c\n",str[length/2-1],str[length/2]);
        }else{
            printf("%c\n",str[length/2]);
        }
    }
}
