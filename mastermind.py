def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("A")] += 1

    guess_counts = [0] * 6
    for char in guess:
        guess_counts[ord(char) - ord("A")] += 1

    black_pegs = 0
    white_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_counts[ord(code[i]) - ord("A")] > 0:
            code_counts[ord(code[i]) - ord("A")] -= 1
            white_pegs += 1

    for i in range(4):
        if code_counts[ord(guess[i]) - ord("A")] > 0:
            code_counts[ord(guess[i]) - ord("A")] -= 1
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)