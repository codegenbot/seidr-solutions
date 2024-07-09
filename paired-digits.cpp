```cpp
int pairedDigits(const std::string& input) {
    int sum = 0;
    for (int i = 0; i < input.length(); ) {
        if (i + 1 < input.length() && input[i] == input[i + 1]) {
            sum += input[i] - '0';
            i++; // skip the paired digit
        } else if (input[i] == input[(i + 1) % input.length()]) { 
            // consider first digit as paired with last one for odd length strings
            sum += input[i] - '0';
        }
        i++;
    }
    return sum;
}