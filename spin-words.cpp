```c++
std::string spinWords(std::string str) {
    std::string word;
    std::string result = ""; 

    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (!word.empty()) {
                if (word.length() >= 5) {
                    std::string temp = word;
                    std::reverse(temp.begin(), temp.end());
                    result += temp + " ";
                    word.clear();
                } else {
                    result += word + " ";
                    word.clear();
                }
            }
        } else {
            word += str[i];
        }
    }
    
    if (!word.empty()) {
        if (word.length() >= 5) {
            std::string temp = word;
            std::reverse(temp.begin(), temp.end());
            result += temp;
        } else {
            result += word;
        } 
    } 
    return result;