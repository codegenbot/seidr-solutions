string middleCharacter(string s) {
    int len = s.length();
    string result;
    
    if(len % 2 == 0){
        int mid1 = len / 2 - 1;
        int mid2 = len / 2;
        result += s[mid1];
        result += s[mid2];
    }else{
        int mid = len / 2;
        result = s[mid];
    }
    
    return result;
}