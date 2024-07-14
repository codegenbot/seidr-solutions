int sumPairedDigits(string str) {
    int sum = 0;
    for(int i=0, j=str.length()-1; i < j; ) { 
        if(str[i] == str[j]) { 
            sum += (str[i]-'0') * 2; // handle the case where the pair is the same
            i++; j--;
        } else if(str[i] < str[j]) {
            i++;
        } else {
            j--;
        }
    }
    return sum;
}