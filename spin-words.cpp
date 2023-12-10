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

int main()
{
    string input;
    getline(cin, input);

    vector<string> words;
    int i = 0;
    while (i < input.size())
    {
        if (input[i] == ' ')
        {
            i++;
            continue;
        }
        string word;
        while (i < input.size() && input[i] != ' ')
        {
            word += input[i];
            i++;
        }
        if (word.size() >= 5)
        {
            reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << words[i];
    }

    return 0;
}