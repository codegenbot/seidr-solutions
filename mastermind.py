import collections
from typing import Tuple

def mastermind() -> Tuple[int, int]:
    code = input()
    guess = input()

    if len(code) != 4 or len(guess) != 4:
        raise ValueError("Code and guess must be 4-character strings")

    for char in code + guess:
        if char not in "ABCDEF":
            raise ValueError("Code and guess must consist of characters A, B, C, D, E, or F")

    black_pegs = 0
    white_pegs = 0
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1

    for color in code_count:
        white_pegs += min(code_count[color], guess_count[color])

    return white_pegs, black_pegs

result = mastermind()
print(result[0], result[1])