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
// Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
// For example,
// input:

// output:

// input:
// a
// output:
// a
// input:
// this is a test
// output:
// this is a test
// input:
// this is another test
// output:
// this is rehtona test
// input:
// hi
// output:
// hi
// */
int main()
{
    string str;
    string strTemp;
    string strRes;
    bool start = true;
    while (getline(cin,strRes))
    {
        str += " ";
        str += strRes;
    }

    int count = 0;
    string::iterator itr;
    for (itr = str.begin(); itr != str.end();itr++)
    {
        //cout << *(itr);
        if (isspace(*(itr)))
        {
            count = 0;
            str += strTemp;
            if (strTemp.length() >= 5)
            {
                reverse(strTemp.begin(),strTemp.end());
            }
            str += " ";
            strTemp = "";
        }
        else
        {
            strTemp = strTemp + *itr;
            count++;
        }
    }
    cout << strTemp;



	return 0;
}
