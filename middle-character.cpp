string middleCharacter(string str) {
    int len = str.length();
    if(len % 2 == 0){
        return str.substr(len/2 - 1, 2);
    } else {
        return str.substr(len/2, 1);
    }
}