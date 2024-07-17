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
            size_t tempPos = pos;
            while ((tempPos = result.find(" ", tempPos)) != std::string::npos) {
                if (result.substr(tempPos, 5).find_first_of({ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }) == std::string::npos) {
                    break;
                }
            }
            tempPos++;
            if (tempPos != 0) {
                result = result.substr(0, pos) + " " + result.substr(pos).substr(tempPos);
                pos += tempPos - pos;
            } else {
                result.erase(0, pos);
            }
        } else {
            break;
        }
    }

    return result;
}