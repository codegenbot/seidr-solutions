def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    white_peg = sum(min(count, guess.count(c)) for count, c in zip(code_count, "BOYYG"))
    black_peg = sum(1 for i, c in enumerate(guess) if c == code[i])
    return str(black_peg), str(white_peg)