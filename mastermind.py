def get_clue(code, guess):
    white = sum(1 for c in code if c in guess and c != guess[guess.index(c)])
    black = 0
    for i in range(len(guess)):
        if code[i] == guess[i]:
            black += 1
    return str(black) + "\n" + str(4 - black)