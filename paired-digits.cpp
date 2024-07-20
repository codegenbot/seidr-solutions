int pairedDigits(std::string s) {
    int sum = 0;
    while (s[0] == '0' && s.length() > 1) s.erase(0, 1);
    std::string str = s; 
    for (int i = 0; i < str.length() - 1; i++) {
        if ((i < str.length() - 1) && ((str[i] == '0') || (str[i] - '0' == str[i + 1] - '0'))) {
            sum += (str[i] - '0');
        }
    }
    return sum;
}