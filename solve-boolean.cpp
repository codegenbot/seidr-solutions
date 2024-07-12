int main() {
    int testCases;
    std::cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        std::string expression;
        std::cin >> expression;
        std::cout << (evaluateBooleanExpression(expression) ? "True" : "False") << std::endl;
    }
    return 0;
}