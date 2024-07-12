int main() {
    // Read input from user
    std::string expression;
    std::cout << "Enter the Boolean expression (using T, F, |, and &): ";
    std::cin >> expression;

    // Evaluate the Boolean expression
    bool result = evaluateBooleanExpression(expression);

    // Output the result
    std::cout << "Result: " << (result ? "T" : "F") << std::endl;

    return 0;
}