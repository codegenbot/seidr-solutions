#include <cstddef>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (size_t i = 0; i < code.length(); ++i) {
        size_t pos = guess.find(code[i]);
        while (pos != std::string::npos) {
            if (std::string(1, code[i]) == guess.substr(pos, 1)) {
                blackPegs++;
                guess.erase(pos, 1);
            } else {
                whitePegs++;
            }
            pos = guess.find(code[i]);
        }
    }

    return whitePegs + blackPegs;
}