```
def mastermind(code, guess):
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = 0
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    for i in range(6):
        white_pegs += min(code_counts[i], guess.count(chr(i + ord('A'))))

    return str(black_pegs) + "\n" + str(white_pegs)