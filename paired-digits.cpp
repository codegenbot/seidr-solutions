```c++
int pairedDigits(const std::string& input) {
    int sum = 0;
    for (int i = 0; i < input.length() - 2; i++) { 
        if (input[i] - '0' == input[i + 1] - '0') {
            sum += input[i] - '0';
        }
    }
    return sum;
}