Here is the solution:

string middleCharacter(string str) {
    int len = str.length();
    if(len % 2 == 1)
        return string(1, str[len/2]);
    else
        return str.substr(len/2-1, 2);
}