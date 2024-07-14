```
def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white = sum(min(count, guess.count(char)) for char, count in zip(map(chr, range(ord('A'), ord('F'))), code_count))
    black = sum(a == b for a, b in zip(code, guess))
    return str(black), str(white)