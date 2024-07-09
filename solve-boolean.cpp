#include <string>

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
            break;
        }
        else if (c == '&') {
            while(res && s.find('&') != string::npos){
                size_t pos = s.find('&');
                if(s[pos+1] == 'T'){
                    s.replace(pos, 2, "FT");
                }else{
                    s.replace(pos, 2, "FF");
                }
            }
        }
        else if (c == '|') {
            while(res || s.find('|') != string::npos){
                size_t pos = s.find('|');
                if(s[pos+1] == 'T'){
                    s.replace(pos, 2, "FT");
                }else{
                    s.replace(pos, 2, "FF");
                }
            }
        }
    }
    return res;
}