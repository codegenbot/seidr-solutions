```
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)

    for i in range(6):
        white_pegs += min(code_count[i], guess_count[i]) - (code.count(chr(i + 97)) if code_count[i] > 0 else 0)

    return str(black_pegs), str(white_pegs)