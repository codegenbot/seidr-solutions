```c++
std::string decode(std::string cipher, std::string mapping) {
    int freq[256] = {0}; // assuming ASCII characters
    for (char m : mapping) {
        freq[m]++;
    }
    
    std::string result = "";
    for (char c : cipher) {
        int idx = -1;
        for (int i = 0; i < 256; ++i) {
            if (freq[i] > 0) {
                --freq[i];
                idx = i;
                break;
            }
        }
        result.push_back(idx);
    }
    return result;
}

int main() {
    std::string cipher = "cehubtgxnspvqohlwrzady";
    std::string mapping = "vmrbxneukctiflzswjpqdyyvogsnul";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}