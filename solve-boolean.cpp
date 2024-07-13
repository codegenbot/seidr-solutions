```c
#include <string>
using namespace std;

bool solveBoolean(string s) {
    if(s == "T" || s == "true") return true;
    if(s == "F" || s == "false") return false;
    
    int i = 0, j = 0;
    string t1 = "", t2 = "";
    while(i < s.length()) {
        if(s[i] == '&') {
            if(t1 != "" && t2 != "") {
                if(t1 == "T" || t1 == "true") return (t2 == "F" || t2 == "false");
                else if(t1 == "F" || t1 == "false") return false;
            }
            j = i+1;
            break;
        } 
        else if(s[i] == '|') {
            if(t1 != "" && t2 != "") {
                if(t1 == "T" || t1 == "true") return true;
                else if(t1 == "F" || t1 == "false") return (t2 == "T" || t2 == "true");
            }
            j = i+1;
            break;
        } 
        t1 += s[i];
        i++;
    }
    
    while(j < s.length()) {
        t2 += s[j];
        j++;
    }
    
    if(t1 == "T" || t1 == "true") return (t2 == "F" || t2 == "false");
    else if(t1 == "F" || t1 == "false") return false;
    
    if(t2 == "T" || t2 == "true") return true;
    else if(t2 == "F" || t2 == "false") return (t1 == "T" || t1 == "true");
    
    return (t1 == "T" && t2 == "T") || (t1 == "F" && t2 == "F");
}

int main() {
    string input;
    cin >> input; 
    bool result = solveBoolean(input); 
    cout << (result ? "True" : "False"); 
    return 0;
}