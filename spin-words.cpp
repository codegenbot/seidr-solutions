#include <vector>
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
int main() {
    string s;
    while(getline(cin, s)){
        string res = "";
        string word = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                word += s[i];
            }else{
                if(word.size() >= 5){
                    reverse(word.begin(), word.end());
                }
                res += word;
                res += ' ';
                word = "";
            }
        }
        if(word.size() >= 5){
            std::reverse(word.begin(), word.end());
        }
        res += word;
        cout << res << endl;
    }
    return 0;
}
