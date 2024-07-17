string middleCharacter(string str) {
    int n = str.length();
    if(n % 2 == 0) {
        return str.substr((n/2)-1, 2);
    } else {
        return string(1, str[n/2]);
    }
}