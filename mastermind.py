Here is the completed code:

def mastermind(code, guess):
    black = sum([1 for i in range(4) if code[i] == guess[i]])
    white = 4 - black
    return str(black) + '\n' + str(white)