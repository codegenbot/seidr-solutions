std::string middleCharacter() {
    int len = input.length();
    int mid = len % 2 == 0 ? (len / 2) - 1 : len / 2;
    
    if(len % 2 == 0){
        return std::string(1, s.substr(mid + 1, 2).at(0));
    } else{
        return std::string(1, s.substr(mid, 1).at(0));
    }
}