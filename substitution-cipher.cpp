```cpp
for (int j = 0; j < std::min(cipher_map1.length(), cipher_map2.length()); j++) {
    mapping.insert(std::make_pair(tolower(cipher_map1[j]), tolower(cipher_map2[j])));
}