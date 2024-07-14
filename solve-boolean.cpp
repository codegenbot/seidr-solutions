bool solveBoolean(string s) {
    if(s=="T") return true;
    else if(s=="F") return false;
    else if(s.size()>1){
        bool res = solveBoolean(s.substr(0,s.find('&'))); 
        for(int i=s.find('&')+1; i<s.size(); i++) {
            res = (res && solveBoolean(s.substr(i,1)));
        }
        return res;
    }else{
        for(int i=0; i<s.size();i++){
            if(s[i]=='|') return true;
            else if(s[i]&1) return false;
        }
        return true;
    }
}