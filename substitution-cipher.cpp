namespace {
using namespace std;
std::string cipher(std::string cipher1, std::string cipher2, std::string input) {
    std::string result = "";
    for (char c : input) {
        size_t pos = cipher2.find(std::tolower(c)); 
        if (pos != string::npos) {
            char originalCase = (isupper(c)) ? toupper(c) : tolower(c);
            if (find_if(cipher1.begin(), cipher1.end(), [originalCase](char x) { return tolower(x) == tolower(originalCase); }) != cipher1.end()) {
                result += c;
            } else {
                size_t pos2 = cipher1.find(std::tolower(c)); 
                if (pos2 != string::npos) {
                    result += cipher1[pos2];
                } else {
                    result += c; 
                }
            }
        }
    }
    return result;
}
}