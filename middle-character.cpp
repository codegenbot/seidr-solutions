#include <iostream>
#include <string>
using namespace std;
/*
Write a function to determine whether a given word, s, is also a valid prefix. Given that this function already exists (say, is_prefix()), please write an alternative implementation of it, making sure that it runs in linear time with regards to the length of s.
Your two functions do_is_prefix() and do_is_prefix_rev() will take the same arguments, and their signatures and returns are all the same.
Also, you may not use a custom data structure in your implementation, e.g., you should use a list or string in Python already provided for you if you are implementing this function in Python. In other words, your implementation of do_is_prefix() and do_is_prefix_rev() should hardly be longer than 10 lines long.

Implementation example:
$ python doisprefix.py
Prefix: n
Word: nan
Function is_prefix: True
Linear time version: True
$ python doisprefix.py
Prefix: Not
Word: None
Function is_prefix: True
Linear time version: True
$ python doisprefix.py
Prefix: Nan
Word: Napoleon
Function is_prefix: True
Linear time version: True
$ python doisprefix.py
Prefix: None
Word: Nano
Function is_prefix: False
My linear time version: False
*/
bool is_prefix(const string &s, const string &prefix);
bool do_is_prefix(const string &s, const string &prefix);
bool do_is_prefix_rev(const string &s, const string &prefix);
int main() {
    string s;
    cin >> s;
    if (s.length() % 2 == 0) {
        cout << s[s.length()/2-1] << s[s.length()/2] << endl;
    } else {
        cout << s[s.length()/2] << endl;
    }
    return 0;
}
