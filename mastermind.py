def get_clue(code, guess):
    clue = []
    for i in range(4):
        if code[i] == guess[i]:
            clue.append((1, 0))
        elif guess[i] in code:
            clue.append((0, 1))
        else:
            clue.append((0, 0))
    return sum(clue)