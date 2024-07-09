int main() {
    std::string s;
    std::cout << "Enter a Boolean expression (T/F/,/): ";
    std::cin >> s;

    std::cout << solveBoolean(s) << std::endl;

    return 0;
}