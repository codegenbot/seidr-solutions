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
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0
*/
int main() {
	char str1[30];
	char str2[30];
	int hash[30];
	int black=0;
	int white=0;
	cin >> str1;
	cin >> str2;
    for(int i=0;i<4;++i)
        hash[str2[i]]=i;
	for(int i=0;i<4;++i)
	{
		if(str1[i]==str2[i])
		{
			++black;
			a[str2[i]]=-1;
			a[str1[i]]=-1;
		}
	}
	for(int i=0;i<4;++i)
	{
		if(a[i]!=-1 && a[str1[i]]!=-1 && str1[i]==str2[i])
		{
			++white;
			a[str2[i]]=-1;
			a[str1[i]]=-1;
		}
	}
	cout << white<<" "<< black;
	return 0;
}
