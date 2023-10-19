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
1)
Given an integer representing a number of hours and 3 floats representing how much snow is on theground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
For example,
input:
0
0.0
0.0
0.0
output:
0.0
input:
15
15.0
15.0
0.15
output:
92.5748913763936
input:
20
19.99
9.999
0.999
output:
10.00900900900901
input:
20
19.99
9.999
0.0
output:
219.96999999999994
input:
10
0.0
1.0
0.0
output:
10.0
*/

int main() {
    int hours, out = 0;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;
    snow = rate = melt = hours = 0 ? std::cout << "0.0" : 0;
    float snow_rate = snow * rate;
    //cout << snow_rate << endl;
    float snow_melt = snow * melt;
    //cout << snow_melt << endl;
    float snow_left = (snow_rate - snow_melt) * hours;
    //cout << snow_left << endl;
    cout << snow_left + snow;
    return 0;
}
/*
2)
Word Completion
Input Format
A dictionary in the form:
[DICT_LENGTH]
[WORD1Len WORD1c1 WORD1c2 ... WORD1c[WORD1Len]]
[WORD2Len WORD2c1 WORD2c2 ... WORD2c[WORD2Len]]
...
[WORDNTNL WORDNTNLc1 WORDNTNLc2 ... WORDNTNLc[WORDNTNL]]
5
a 1 2 3 4
bo 10 1 1 1 1 1 1 1 1 1 1
c 5 1 1 1 1 1
d 3 1 1 1
e 4 1 1 1 1

and a string, that could be the prefix of any of the words above.
Example

[DictLen]
[3 'b' 'i' 'l']
[6 'b' 'i' 'l' 'l' 'e' 'r']
[9 'b' 'i' 'l' 'l' 'e' 'r' 'y']
5
b


Output Format
The completion of the string. Print -1 if there is no possible completion.
Example

[3 'b' 'i' 'l']
*/
int main() {
    std::vector<string> dic;
    string a,e;
    dic.push_back("a");
    dic.push_back("bo");
    dic.push_back("c");
    dic.push_back("d");
    dic.push_back("e");
    int len, min = 100000,ans;
        cin >> e;
        for (auto c : dic){
            len = c.length();
            if(len >= e.length()){
                if(c.substr(0,e.length()) == e){
                    if(min > len) {
                        min = len;
                        a = c;
                        ans=1;
                    }
                }
            }
        }
        ans == 1 ? cout << a: cout << "-1";

    return 0;
}
