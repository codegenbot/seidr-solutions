bool isValidInput(const string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == string::npos && input.find(" ") == string::npos;
}