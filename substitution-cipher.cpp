```cpp
std::string decipher(std::string key1, std::string key2, std::string message) {
    std::string result = "";
    for (char c : message) {
        int index = key2.find(c);
        if (index != std::string::npos)
            result += key1[index];
        else
            result += c;
    }
    return result;
}