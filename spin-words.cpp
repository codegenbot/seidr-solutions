#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
/*
Given a string of one or more words (separated by spaces), reverse all of the words that are five or more letters long and return the resulting string. 
For example, input: a output: a input: this is a test output: this is a test input: this is another test output: this is rehtona test input: hi output: hi 
*/
int main()
{
    char str[MAXN];
    cin.getline(str, MAXN);
    int len = strlen(str), i = 0;
    while (i < len)
    {
        int j = i;
        while (j < len && str[j] != ' ')
            j++;
        if (j - i >= 5)
        {
            int l = i, r = j - 1;
            while (l < r)
                swap(str[l++], str[r--]);
        }
        i = j + 1;
    }
    cout << str << endl;
}
