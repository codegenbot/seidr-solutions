#include <string>
using namespace std;

bool solveBoolean(string s) {
    if(s == "T" || s == "true") return true;
    if(s == "F" || s == "false") return false;
    
    int i = 0, j = 0, k = 0;
    while(i < s.length()) {
        if(s[i] == '&') {
            j = i + 1;
            break;
        }
        i++;
    }
    while(j < s.length()) {
        if(s[j] == '|') {
            k = j;
            break;
        }
        j++;
    }
    
    string op1 = s.substr(0, i);
    string op2 = s.substr(i + 1, k - i - 1);
    string operand = s.substr(k + 1);
    
    if(op1 == "T" || op1 == "true") {
        op1 = "True";
    }
    else if(op1 == "F" || op1 == "false") {
        op1 = "False";
    }
    
    if(op2 == "T" || op2 == "true") {
        op2 = "True";
    }
    else if(op2 == "F" || op2 == "false") {
        op2 = "False";
    }
    
    if(operand == "T" || operand == "true") {
        operand = "True";
    }
    else if(operand == "F" || operand == "false") {
        operand = "False";
    }
    
    if(op1 == "True" && op2 == "True")
        return true;
    else if(op1 == "True" && op2 == "False")
        return false;
    else if(op1 == "False" && op2 == "True")
        return false;
    else if(op1 == "False" && op2 == "False")
        return true;
    
    if(operand == "True") {
        if(op1 == "True" || op2 == "True")
            return true;
        else
            return false;
    }
    else {
        if(op1 == "True" || op2 == "True")
            return false;
        else
            return true;
    }
}