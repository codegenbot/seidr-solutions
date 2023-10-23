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
code snippets are iteratively mantained
output:
smytned nospmiit era ytviterly nidamet
input:
hello world is awesome
output:
hello world is emosewa

input:
pilani by vnit is cool
output:
pillai by nivt is looc

input:
good bye world
output:
good eybw dlrow

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
class Solution{
public:

string reverse(string s) 
{
    int i, j, k;
    while (i < s.size()) {
        while (i < s.size() && s[i] == ' ') i++;
        j = i;
        while (j < s.size() && s[j] != ' ') j++;
        if (j - i >= 5) {
            for(k=j-1 ; k>=i; k--) 
            {
                printf("%c\n",s[k]);
                s.push_back(s[k]);
            }
        } else {
            s += s.substr(i, j - i);
        }
        i = j;
    }
    return s;
}
};

int main() {

    string s;
    s ="Make sure that     source code   are iteratively mantained";
    
//    while(1)
//    {
//        getline(cin, s);
        Solution obj = Solution();
        cout<<obj.reverse(s)<<endl;
//    }
    
//    string res;
//    int i = 0, j = 0;
//    while (i < s.size()) {
//        while (i < s.size() && s[i] == ' ') i++;
//        j = i;
//        while (j < s.size() && s[j] != ' ') j++;
//        if (j - i >= 5) {
//            for (int k = j - 1; k >= i; k--) {
//                res.push_back(s[k]);
//            }
//        } else {
//            res += s.substr(i, j - i);
//        }
//        i = j;
//    }
//    cout << res << endl;
    return 0;
}

