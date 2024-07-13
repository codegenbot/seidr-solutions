Here is the solution:

def mastermind(code, guess):
    black = sum(1 for i in range(len(guess)) if code[i] == guess[i])
    white = sum(min(c.count(g), g.count(c)) for c, g in zip(code, guess)) - black
    return str(black) + "\n" + str(white)