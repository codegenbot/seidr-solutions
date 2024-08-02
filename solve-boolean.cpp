string solveBoolean(string s) {
    if(s.length() == 0 || (s.length() > 1 && (s[0] != 'T' && s[0] != 'F'))){
        return "Invalid Input";
    }

    bool result = (s.length() > 0) ? (s[0] == 'T') : false;

    for(int i = 1; i < s.length(); ++i){
        if(s[i] == '|'){
            result |= !result;
        }
        else{
            result &= (s[i] == 'T');
        }
    }

    return (result) ? "True" : "False";
}