```
int main() {
    std::string expression;
    std::cout << "Enter Boolean expression: ";
    std::cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
}