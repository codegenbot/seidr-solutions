def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    black_peg = sum([min(code_count[i], guess.count(chr(i + 65))) for i in range(6)])
    white_peg = len(guess) - black_peg
    return str(white_peg), str(black_peg)