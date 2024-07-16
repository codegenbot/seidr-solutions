```c++
int code_counts[6] = {0};

int mastermind(int code[], int guess[]) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            for (int j = 0; j < 4; j++) {
                if (code[j] == guess[i] && i != j) {
                    whitePegs++;
                    break;
                }
            }
        }
    }

    return {blackPegs, whitePegs};
}

int main() {
    int code[] = {'R', 'G', 'B', 'Y'};
    int guess[] = {'R', 'B', 'G', 'Y'};

    int result[] = mastermind(code, guess);

    std::cout << "Black pegs: " << result[0] << ", White pegs: " << result[1] << std::endl;

    return 0;
}