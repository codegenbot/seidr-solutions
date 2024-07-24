def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6

    for c in code:
        code_count[ord(c) - ord("A")] += 1

    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess_count[ord(guess[i]) - ord("A")] > 0:
            white_pegs += 1
            guess_count[ord(guess[i]) - ord("A")] -= 1

    for i in range(6):
        if code_count[i] > 0 and guess_count[i] > 0:
            white_pegs -= min(code_count[i], guess_count[i])

    return str(black_pegs) + "\n" + str(white_pegs)