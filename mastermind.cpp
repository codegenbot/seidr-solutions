```cpp
int main() {
    std::string code = "ABCD";
    std::string guess = "EFGH";
    auto result = mastermind(code, guess);
    int white = std::get<0>(result);
    int black = std::get<1>(result);
    std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;
    return 0;
}