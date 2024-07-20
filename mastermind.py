def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = [0] * 6

    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    code_copy = list(code)
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
            del code_copy[code.index(guess[i])]
        elif code_counts[ord(guess[i]) - ord("B")] > 0:
            white_pegs += 1
            code_counts[ord(guess[i]) - ord("B")] -= 1

    return str(black_pegs), str(white_pegs)