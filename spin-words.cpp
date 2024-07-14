#include <string>
using namespace std;

string spinWords(string s) {
    string result = "";
    size_t pos = 0;
    
    while ((pos = s.find(" ")) != string::npos) {
        size_t nextPos = s.find(" ", pos + 1);
        
        if (nextPos == string::npos || s.substr(pos+1, nextPos-pos-1).length() >= 5) {
            if (s.substr(pos, nextPos - pos).length() >= 5)
                result += s.substr(pos, nextPos - pos)[::-1] + " ";
            else
                result += s.substr(pos, nextPos - pos) + " ";
        } else {
            result += s.substr(pos, nextPos - pos) + " ";
            pos = nextPos;
        }
    }
    
    if (s.length() >= 5)
        result += s.substr(s.find_last_of(" ")+1)[::-1];
    else
        result += s;
        
    return result;
}