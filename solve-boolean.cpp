string solveBoolean(string s) {
    bool boolResult;
    
    if(s == "t") {
        boolResult = true;
    } else {
        boolResult = false;
    }
    
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            
            if(left == "t" && right == "f") {
                boolResult = false;
                break;
            }
            else if(left == "f" && right == "t") {
                boolResult = false;
                break;
            } 
            else if((left == "t" && right == "t") || (left == "f" && right == "f")) {
                boolResult &= true;
            }
        } else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            
            if(left == "t" || right == "t") {
                boolResult = true;
                break;
            }
        }
    }
    
    return boolResult ? "True" : "False";
}