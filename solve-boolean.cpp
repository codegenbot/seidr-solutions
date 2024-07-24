string solveBoolean(string s) {
    bool res = false;
    for(int i=0; i<s.length();i++){
        if(s[i]=='T')
            res=true;
        else if(s[i]=='F')
            return "False";
        else if(s[i]=='&' || s[i]=='|'){
            if(i+1<s.length() && (s[i+1]=='&' || s[i+1]=='|')){
                i++;
                continue;
            }
            bool a = res;
            res=false;
            if(s[i]=='&' && a){
                res=true;
            }else if(s[i]=='|' && !a){
                res=true;
            }
        }
    }
    return (res) ? "True" : "False";
}