int main() {
    std::string input;
    printf("Enter a string of digits: ");
    std::cin >> input;

    int result = pairedDigits(input);
    printf("Sum of paired digits: %d\n", result);

    return 0;