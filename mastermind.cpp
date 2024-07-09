```c++
int main() {
    std::string code = "AAAA";
    std::string guess = "ABCD";
    auto result = mastermind(code, guess);
    std::cout << "White pegs: " << result.first << ", Black pegs: " << result.second << std::endl;
    return 0; 
}