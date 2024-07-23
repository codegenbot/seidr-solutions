```cpp
char result = length % 2 == 1 ? s.at(length / 2) : s.at((length - 1) / 2);
result += (length % 2 != 1 && s.length() > 0) ? s.at((length + 1) / 2) : '\0';
return std::string(1, result);