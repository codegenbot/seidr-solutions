def mastermind(code, guess):
    white = 0
    black = 0
    code_set = set(code)
    guess_set = set(guess)

    # count the number of correct colors in wrong places
    white = len([c for c in guess if c in code_set and c != code[guess.index(c)]])

    # count the number of correct colors in correct places
    black = sum([1 for i in range(4) if code[i] == guess[i]])

    return str(black) + "\n" + str(white)