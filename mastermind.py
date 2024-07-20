def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = [0] * 6

    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_counts[ord(guess[i]) - ord("B")] > 0:
            white_pegs += 1
            code_counts[ord(guess[i]) - ord("B")] -= 1

    for c in range(6):
        if code_counts[c] > 0 and guess.count(chr(c + ord('B'))) > 0:
            white_pegs += min(code_counts[c], guess.count(chr(c + ord('B'))))
            code_counts[c] = 0

    return str(black_pegs), str(white_pegs)