```cpp
#include <cstddef>
#include <string>

size_t whitePegs = 0;
size_t blackPegs = 0;

for (int i = 0; i < 4; ++i) {
    size_t pos = code.find(guess[i]);
    if (pos != std::string::npos) {
        if (pos == i) {
            ++blackPegs;
        } else {
            ++whitePegs;
        }
    }
}

return whitePegs + blackPegs;