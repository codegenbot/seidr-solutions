def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        code_counts[ord(code[i]) - ord("A")] += 1
        guess_counts[ord(guess[i]) - ord("A")] += 1

    black = sum([min(code_counts[i], guess_counts[i]) for i in range(6)])
    white = sum([min(code_counts[i], 4 - guess_counts[i]) for i in range(6)])

    return str(black) + "\n" + str(white)