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
void reverse(vector<char> &s) {
    int n = s.size(), j = n-1;
    for (int i=0; i<n; ++i) {
        if (s[i]==' ') {
            for (int k=i-1; k>j; --k) {
                swap(s[k], s[j--]);
            }
        }
    }
    for (int k=n-1; k>j; --k) {
        swap(s[k], s[j--]);
    }
}
void test(char *str) {
    int n = strlen(str);
    vector<char> s(str, str+n);
    for (int i=0; i<n; ++i) {
        cout << s[i];
    }
    cout << "-----";
    reverse(s);
    for (int i=0; i<n; ++i) {
        cout << s[i];
    }
    cout << endl;
}
int main() {
    char str[5][100] = {"you", "five more", "Convert numbers between 0-99", "mQaHx V IGsLwuxAvVDwVM E TFl WWODPgwsHtimmFlHmiMWwtD tAMUXGvXTuMpSBQz", "kPXwIYj PownjeaNyreLmNiTGSVRJEAECHqZNryulELzbhzmAiJaLdRC TsZX"};
    for (int i=0; i<5; ++i) {
        test(str[i]);
    }
    return 0;
}
