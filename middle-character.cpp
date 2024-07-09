string middleCharacter(string str) {
    int length = str.length();
    if(length % 2 != 0) {
        return string(1, str[length/2]);
    } else {
        return string(1, str[(length-1)/2]) + string(1, str[(length+1)/2]);
    }
}