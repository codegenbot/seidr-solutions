Here is the complete code:

string middleCharacter(string s) {
    int n = s.length();
    if(n % 2 != 0){
        return string(1,s[n/2]);
    }
    else{
        return string(2,s.substr(n/2-1,2));
    }
}