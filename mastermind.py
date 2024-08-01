def get_pegs(code, guess):
    pegs = [0, 0]
    for i in range(4):
        if guess[i] == code[i]:
            pegs[1] += 1
        elif guess[i] in code:
            pegs[0] += 1
    return pegs