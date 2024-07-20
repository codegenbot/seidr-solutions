```cpp
int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    for (char c : code) { 
        auto it = find(guess.begin(), guess.end(), c); 
        if (it != guess.end()) { 
            if (&*it == &guess[find(guess.begin(), guess.end(), c) - guess.begin()]) { 
                ++black; 
            } else {
                ++white;
            }
        }
    }

    return black + white;
}