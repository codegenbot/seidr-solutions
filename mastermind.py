def mastermind(code, guess):
    white_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    black_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            guess = guess[:i] + "*" + guess[i+1:]
    white_pegs = 4 - sum(1 for c in guess if c != "*")
    return str(black_pegs) + "\n" + str(white_pegs)