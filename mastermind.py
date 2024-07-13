def mastermind(code, guess):
    black_peg = 0
    white_peg = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif guess.count(guess[i]) > 0:
            white_peg += 1
            guess = guess.replace(str(guess[i]), '', 1)

    return (str(black_peg), str(white_peg))