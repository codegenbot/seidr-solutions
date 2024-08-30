def mastermind(code, guess):
    black = sum([1 for i in range(4) if code[i] == guess[i]])
    white = sum([min(c.count(x), g.count(x)) for x in set(code + guess)])
    return str(black) + "\n" + str(4 - black - white)