#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        int idx = mapping.find(c);
        if (idx != std::string::npos) {
            char m = mapping[idx];
            result += m;
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {
    // input
    std::string cipher, mapping, msg;
    cin >> cipher >> mapping >> msg;

    // call decode function
    std::cout << decode(cipher, mapping) << endl;

    return 0;
}