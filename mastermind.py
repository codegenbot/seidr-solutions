import collections
from typing import Tuple

def mastermind() -> Tuple[int, int]:
    try:
        code = input().strip()
        guess = input().strip()

        if len(code) != 4 or len(guess) != 4:
            raise ValueError("Input is not a 4-character string")

        valid_chars = set('ABCDEF')
        if any(char not in valid_chars for char in code) or any(char not in valid_chars for char in guess):
            raise ValueError("Code or guess contains invalid characters")

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

    except Exception as e:
        print("Error:", str(e))
        return 0, 0

result = mastermind()
print(result[0], result[1])