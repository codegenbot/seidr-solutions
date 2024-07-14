int main() {
    const char* code = "xxxx";
    const char* guess = "yyyy";
    int result = mastermind(code, guess);
    std::cout << "Black pegs: " << (result / 2) << ", White pegs: " << (result % 2) << std::endl;
    return 0;
}