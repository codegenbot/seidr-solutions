Here is the solution in C++:

string middleCharacter(string str) {
    int len = str.length();
    if(len % 2 == 1){
        return string(1, str[len/2]);
    } else{
        return string(1, str[len/2 - 1]) + string(1, str[len/2]);
    }
}