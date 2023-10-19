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
Problem Description
As any spy knows, great communication is the key to success.
Now, a team of agents, all of them, have the decyphering key. That is, everyone's decyphering procedure is the same. However, during transmission, each piece of message must undergo a random shift, in order for the string to remain secure as any given piece must be read only by the user it was addressed to. Still, due to resources availability, in order for both the sender and the receiver to work correctly, both ciphering and deciphering procedures must be exactly the same.
Each agent has a list of targeted agents, specifying to whom he can address a message, and each agent has a list of coded strings.
You must help each agent decipher his input.
Make sure to use the right deciphering procedure for each input.
Note that an agent knows in advance the agent it's receiving from, as well as the shift. The shift is the number of characters each message part must be shifted in order to be decyphered correctly.
The two lists will have the same number of items, where the i-th item in each list represents the respective list for the i-th coded string. 
input:
0
0 1 7
16 10 11 3 2 8 6 12 5 15 1 14 4 9 13
18 17 13 8 14 7 12 10 9 4 11 2 19 6 15 5 20 16 1 3
0 1 2 3 4 5 6
7 8 9 10 11 12 13
Use Set 0 Message 0 Result: I nds a ptnw ols gmta
Use Set 0 Message 1 Result: uordna dsfgnsfu
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
*/
int main() {
    string a,b,c;
    cin>>a>>b>>c;
    map<char,char> ma;
    for(int i=0;i<a.length();i++){
        ma[a[i]]=b[i];
    }
    string res;
    for(int i=0;i<c.length();i++){
        res+=ma[c[i]];
    }
    cout<<res<<endl;
}
