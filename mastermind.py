```
def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1

    black_peg = 0
    white_peg = 0
    seen_chars = set(code)

    for i in range(4):
        if guess[i] == code[i]:
            black_peg += 1
        elif guess[i] in seen_chars:
            white_peg += 1

    return str(black_peg), str(white_peg)