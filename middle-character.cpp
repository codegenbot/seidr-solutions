std::string middleCharacter(std::string input) {
    int len = input.length();
    if(len % 2 == 0){
        return std::to_string(input[len/2-1]) + std::to_string(input[len/2]);
    } else{
        return std::to_string(input[len/2]);
    }
}