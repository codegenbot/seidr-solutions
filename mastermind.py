import collections
from typing import Tuple

def mastermind(input_tuple: Tuple[str, str]) -> Tuple[int, int]:
    black_pegs = 0
    white_pegs = 0
    code = input_tuple[0]
    guess = input_tuple[1]
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