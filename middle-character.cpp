string middleCharacter(string input) {
    int len = input.length();
    if(len % 2 == 0){
        return string(1, input[len/2 - 1]) + string(1, input[len/2]);
    } else{
        return string(1, input[len/2]);
    }
}