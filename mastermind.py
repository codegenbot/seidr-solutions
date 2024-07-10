Here is the solution:

def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b and a != 'B')
    black = sum(1 for a, b in itertools.groupby(guess) if list(a)[0] == list(b)[0])
    return str(white), str(black)