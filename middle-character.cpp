std::string middleCharacterHelper(std::string str) {
    int len = str.length();
    if(len % 2 == 0){
        return std::string(1, str.substr(len/2 - 1, 1)) + str.substr(len/2, 1);
    } else{
        return std::string(1, str[len/2]);
    }
}