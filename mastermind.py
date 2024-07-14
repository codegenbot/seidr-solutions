def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for char in set(code):  
        if code.count(char) == guess.count(char): 
            black_pegs += 1
        elif str(char) in guess:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)