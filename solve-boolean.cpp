#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    if(s == "T") return true;
    if(s == "F") return false;
    
    int i = 0, j = s.size() - 1;
    while(i <= j){
        if(s[i] == '&' || s[j] == '&'){
            return false;
        }
        if(s[i] == '|' || s[j] == '|'){
            return true;
        }
        i++;
        j--;
    }
    
    for(int k = 0; k < s.size(); k++){
        if(s[k] == '&') {
            int left = 0, right = 0;
            for(int l = 0; l <= k; l++) {
                if(s[l] == '&') left++;
                else break;
            }
            for(int r = k+1; r < s.size(); r++){
                if(s[r] == '&') right++;
                else break;
            }
            while(left > 0 || right > 0) {
                if(left > 0 && right > 0) return false;
                if(left > 0) left--;
                else if(right > 0) right--;
                k++;
            }
        }
        else if(s[k] == '|') {
            int left = 0, right = 0;
            for(int l = 0; l <= k; l++) {
                if(s[l] == '|') left++;
                else break;
            }
            for(int r = k+1; r < s.size(); r++){
                if(s[r] == '|') right++;
                else break;
            }
            while(left > 0 || right > 0) {
                if(left > 0 && right > 0) return true;
                if(left > 0) left--;
                else if(right > 0) right--;
                k++;
            }
        }
    }
    
    return false;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if(result)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    
    return 0;
}