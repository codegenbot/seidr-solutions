int main() {
    std::string cipherMap = "abcdefghijklmnopqrstuvwxyz"; 
    std::string input = "bzjyvlaopidqguscxrtwk eogfmptnxqhijzkusrvld ijalbwwxcz";
    std::cout << substitutionCipher(cipherMap, input.substr(0, input.size() - 1)) << std::endl;
    return 0;