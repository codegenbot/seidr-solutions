string middleCharacter(string s) {
    int len = s.length();
    if(len%2!=0){
        return string(1,s[len/2]);
    }
    else{
        return string(2,s[(len-1)/2],s[len/2]);
    }
}