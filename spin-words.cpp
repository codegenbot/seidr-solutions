#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] != ' '){
            length++;
        }else{
            if(length >= 5)
                for(int j = length-1; j>=0; j--) result += str[i-j];
            else
                result += str.substr(i-length+1,i);
            length = 0;
        }
    }
    if(length >= 5) 
        for(int i = length-1; i>=0; i--) result += str[i];
    else
        result = str;
    return result;
}