def mastermind(code, guess):
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)

    black_pegs = 0
    white_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_counts[guess[i]] > 0:
            white_pegs += 1
            code_counts[guess[i]] -= 1

    return str(white_pegs) + "\n" + str(black_pegs)