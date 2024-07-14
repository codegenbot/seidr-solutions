bool solveBoolean(string s) {
    bool res = true;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'T') continue;
        else if(s[i] == 'F') return false;
        else if(s[i] == '|'){
            res = !res;
            while(i+1 < s.length() && s[i+1] != '&') i++;
            i--;
        }
        else if(s[i] == '&'){
            bool temp = true;
            while(i+1 < s.length() && s[i+1] != '|') i++;
            i--;
            for(int j=i; j>=0; j--){
                if(s[j] == 'T') continue;
                else if(s[j] == 'F') return false;
                else if(s[j] == '&'){
                    temp = !temp;
                    while(j+1 < s.length() && s[j+1] != '|') j++;
                    j--;
                }
                else break;
            }
            i++;
            res &= temp;
        }
    }
    return res;
}