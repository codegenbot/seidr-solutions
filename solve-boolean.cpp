```cpp
bool solveBoolean(std::string s) {
    int i = 0, n = s.length();
    bool res = true;
    while(i < n){
        if(s[i] == '&') {
            i++;
            char c1 = (s[i-1] == 'T'? true : false);
            char c2 = (s[i] == 'T'? true : false);
            res &= (c1 && c2);
        } else if(s[i] == '|') {
            i++;
            char c1 = (s[i-1] == 'T'? true : false);
            char c2 = (s[i] == 'T'? true : false);
            res |= (c1 || c2);
        }
    }
    return res;
}