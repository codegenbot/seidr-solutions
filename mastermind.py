Here is the completed code:

def mastermind(code, guess):
    correct_position = sum(c1 == c2 for c1, c2 in zip(code, guess))
    wrong_position = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(correct_position), str(4 - correct_position)