```
def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1
    for char in guess:
        guess_count[ord(char) - ord("B")] += 1

    black_peg = sum(1 for a, b in zip(code, guess) if a == b)
    white_peg = sum(min(a, b) for a, b in zip(code_count, guess_count))

    return str(black_peg), str(white_peg - black_peg)