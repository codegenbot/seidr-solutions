```cpp
bool solveBoolean(std::string s) {
    int i = 0, n = s.length();
    bool res = true;
    while(i < n){
        if(s[i] == '|') {
            char c1 = (s[i-1] == 'T'? true : false);
            char c2 = (i+1 < n) ? (s[i+1] == 'T'? true : false) : ((c1)? false: true);
            res = res || c1 && c2;
            i += s[i] == 'F' ? 2 : 1;
        } else if(s[i] == '&') {
            char c1 = (s[i-1] == 'T'? true : false);
            char c2 = (i+1 < n) ? (s[i+1] == 'T'? true : false) : ((c1)? false: true);
            res &= c1 && c2;
            i += s[i] == 'F' ? 2 : 1;
        }
    }
    return res;
}