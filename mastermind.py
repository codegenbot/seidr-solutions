def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    white = 0
    black = 0
    for c in set(guess):  
        if c == code[guess.index(c)]:
            black += 1
        else:
            white += 1

    return str(white), str(black)