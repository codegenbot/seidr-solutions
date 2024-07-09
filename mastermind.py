Here is the completed code:

def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess.count(code[i]) > 0:
            white_pegs += 1
            guess.remove(code[i])
    return str(black_pegs) + "\n" + str(white_pegs)