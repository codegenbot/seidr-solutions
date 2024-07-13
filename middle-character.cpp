std::string middleCharacter(std::string input) {
    int len = input.length();
    if(len % 2 == 0){
        return std::string(1, input[len/2 - 1]) + input.substr(len/2);
    } else{
        return std::string(1, input[len/2]);
    }
}