std::string code = "ABCD";
    std::string guess = "BCDE";
    int result = mastermind(code, guess);
    std::cout << "Black pegs: " << (result - (result / 4)) << ", White pegs: " << result / 4 << std::endl;
    return 0;
}