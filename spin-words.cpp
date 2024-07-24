#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str.find(" ", i) == -1) {
            if(str.length() >= 5)
                reverse(str.begin()+i, str.begin()+i+str.length());
            result += str.substr(i);
            break;
        } else {
            int j = str.find(" ", i);
            if (j + 1 <= str.length()) 
                if(str.length() - i >= 5) 
                    reverse(str.begin()+i+j, str.begin()+i+str.length());
            result += str.substr(i, j - i);
            i = j + 1;
        }
    }
    
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence ('quit' to stop): ";
        cin >> str;
        if (str == "quit") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}