#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <execution>
using namespace std;
string spinWords(string input) {
   vector<string> words = split(input, ' ');
   for (auto word : words) {
       if (word.length() >= 5) {
           reverse(word.begin(), word.end());
       }
   }
   return join(words, ' ');
}