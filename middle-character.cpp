string middleCharacter(string s) {
    int len = s.length();
    if(len%2!=0){
        return string(1,s.substr(len/2,1));
    }
    else{
        return string(2,s.substr((len-1)/2,1),s.substr(len/2,1));
    }
}