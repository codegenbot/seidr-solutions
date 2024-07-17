#include <iostream>
#include <string>

int main() {
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;
    
    for (char &c : s3) {
        for (int i = 0; i < s1.size(); ++i) {
            if (s3[i] == s1[i]) {
                c = s2[i];
                break;
            }
        }
    }
    
    std::cout << s3 << std::endl;
    
    return 0;
}