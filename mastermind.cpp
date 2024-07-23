#include <iostream>
#include <algorithm>

int white = 0, black = 0;
int codeFreq[6] = {0}, guessFreq[6] = {0};

for (int i = 0; i < 6; ++i) {
    white += min(codeFreq[i], guessFreq[i]);
}

return white;