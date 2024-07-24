std::string middleCharacter(const std::string& s) {
    int len = s.length();
    if(len % 2 == 0){
        return (len % 2 == 0) ? s.substr(len/2 - 1, 2) : s.substr(len/2, 1);
    } else{
        return s.substr(len/2, 1);
    }
}