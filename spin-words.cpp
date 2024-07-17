std::string spinWords(std::string sentence) {
    std::string result;
    std::string word;

    for (char c : sentence) {
        if (c == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += c;
        }
    }

    result += word;

    size_t pos = 0;
    while ((pos = result.find(" ")) != std::string::npos) {
        if (result.substr(pos, 5).find_first_of({ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }) != std::string::npos) {
            std::string temp = result.substr(0, pos);
            temp += std::reverse(result.substr(pos + 1)).append(" ");
            result = temp;
        } else {
            break;
        }
    }

    return result;
}