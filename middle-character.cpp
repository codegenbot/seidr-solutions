if(len % 2 == 0){
    return s.substr(mid - 1, 2);
} else{
    return std::string(1, s[mid]);
}