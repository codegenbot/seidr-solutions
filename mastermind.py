def get_pegs(code, guess):
    pegs = [0, 0]
    for i in range(4):
        if code[i] == guess[i]:
            pegs[1] += 1
        elif str(guess[i]) in str(code):
            pegs[0] += 1
    return pegs