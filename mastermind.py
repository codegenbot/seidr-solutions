def mastermind(code, guess):
    code_counts = [code.count(c) for c in set(code)]
    guess_counts = [guess.count(c) for c in set(guess)]

    white_pegs = sum(
        min(count1, count2) for count1, count2 in zip(code_counts, guess_counts)
    )

    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1

    return str(black_pegs) + "\n" + str(4 - black_pegs)