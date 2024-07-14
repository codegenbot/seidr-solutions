int pairedDigits(string s) {
    int sum = 0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i] == s[i+1]){
            sum += s[i];
        }
    }
    return sum;
}