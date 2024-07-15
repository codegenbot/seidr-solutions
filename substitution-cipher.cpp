#include <string>

std::string cipher1 = "abcdefghijklmnopqrstuvwxyz";
std::string cipher2 = "zyxwvutsrqponmlkjihgfedcba";
std::string message = "kftvnb@kzghnm*kfnvxfljnb";
for (char &c : message) {
    size_t index = cipher1.find(c);
    if (index != std::string::npos) {
        c = cipher2[index];
    } else {
        index = cipher2.find(c);
        if (index != std::string::npos) {
            c = cipher1[index];
        }
    }
}