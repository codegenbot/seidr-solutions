```cpp
std::string spinWords(std::string str) {
    std::string result;

    int length = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            length = 0;
        } else {
            length++;
            if (length >= 5) {
                int j = length - 1;
                std::string temp;
                while (j >= 0) {
                    temp += str[i - 1 - j];
                    j--;
                }
                result += temp + " ";
            } else {
                result += str.substr(i - length, length) + " ";
            }
        }
    }

    return result;
}