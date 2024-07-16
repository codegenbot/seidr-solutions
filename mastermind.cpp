```cpp
std::tuple<int, int> mastermind(std::string code, std::string guess) {
    int white = 0; // correct colors (wrong positions)
    int black = 0; // correct colors and positions

    for (int i = 0; i < 4; i++) { // iterate through each position
        bool inCode = false;
        for (int j = 0; j < 4; j++) { // check if character is present in code
            if (guess[i] == code[j]) {
                inCode = true;
                if (j == i) { // correct color and position, increment black
                    black++;
                } else { // correct color, wrong position, increment white
                    white++;
                }
            }
        }
    }

    return std::make_tuple(white, black);
}