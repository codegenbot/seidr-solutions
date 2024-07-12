#include <algorithm>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            int j = i - 1;
            
            while(j >= 0 && str[j] != ' ') {
                j--;
            }
            
            int length = i - j - 1;
            
            if(length > 4) {
                reverse(str.begin() + j + 1, str.begin() + i);
            }
            
            result += str.substr(0, i+1) + " ";
            i++;
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string of one or more words (separated by spaces): ";
    getline(cin, str);

    string output = spinWords(str);
    
    cout << "Output: " << output << endl;

    return 0;
}