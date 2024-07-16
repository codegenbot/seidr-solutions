int main() {
    std::string code = "RGOR";
    std::string guess = "BRBB";
    int whitePegs, blackPegs;
    std::tie(whitePegs, blackPegs) = mastermind(code, guess);
    std::cout << "White pegs: " << whitePegs << ", Black pegs: " << blackPegs << std::endl;
    return 0;
}