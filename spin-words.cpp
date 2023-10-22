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
Efﬁcient Hash Table
Given a set of words, design a data structure that will tell you whether a word is in the set.
You may use anything you like to base your data structure on (hash function, vector, array, heap, bitset, etc) but you must not
use a hash table library. Provide at least one hash function.

Your data structure may use an arbitrary amount of memory.

The 'contains' method should be very fast with a good hash function.

Your data structure should explicitly resist hash collisions.

You may assume that all inputs are lower cased.

For example,
input: 
add foo
add bar
contains foo
contains bar
contains baz
remove bar
contains foo
contains bar
contains baz

output: 
true
true
false
true
true
false
true
*/
int main() {
    int T;
    scanf("%d", &T);
    set<string> table;
    string buff;
    while (T--) {
        cin >> buff;
        if (buff == "add") {
            string next;
            cin >> next;
            // cout << "add:" << next << endl;
            table.insert(next);
        } else if (buff == "remove") {
            string next;
            cin >> next;
            // cout << "remove:" << next << endl;
            table.erase(next);
        } else if (buff == "contains") {
            string next;
            cin >> next;
            // cout << "contains:" << next << endl;
            if (table.find(next) != table.end()) {
                printf("true\n");
            } else {
                printf("false\n");
            }
        }
    }
    return 0;
}
