Here is the solution:

def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if guess[i] == code[i]:
            black += 1
        elif str(guess[i]) in code:
            white += 1
    return str(black), str(white)