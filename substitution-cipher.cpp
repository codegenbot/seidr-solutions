std::string input;
std::string cipher1;
std::string cipher2;
std::string result;

cin >> input >> cipher1 >> cipher2;
for (char c : input) {
    if (c == '\0') {
        break; 
    }
    size_t pos = cipher2.find(std::tolower(c)); 
    if (pos != std::string::npos) {
        result += cipher1[pos]; 
    } else {
        char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
        size_t pos2 = cipher1.find(originalCase); 
        if (pos2 != std::string::npos) {
            result += originalCase; 
        } else {
            result += c; 
        }
    }
}
cout << result;