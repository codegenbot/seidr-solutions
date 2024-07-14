#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    string temp = "";

    for(int i = 0; i < input.length(); i++) {
        char c = input[i];
        if(c == ' ') {
            if(temp.length() >= 5)
                for(int j = temp.length()-1; j >= 0; j--)
                    output += temp[j];
            else
                output += temp;
            temp = "";
        } 
        else {
            temp += c;
        }
    }

    if(temp.length() >= 5)
        for(int i = temp.length()-1; i >= 0; i--)
            output += temp[i];
    else
        output += temp;

    return output;
}