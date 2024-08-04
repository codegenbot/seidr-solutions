def get_clue(code, guess):
    clue = [0, 0]
    for i in range(4):
        if code[i] == guess[i]:
            clue[1] += 1
        elif str(guess[i]) in code:
            clue[0] += 1
    return tuple(clue)