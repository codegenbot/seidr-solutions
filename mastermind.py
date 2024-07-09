def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    code_set = set(code)
    white = len([i for i in code_set if i in set(guess) and i != ''.join(x for x,y in zip(code,guess) if y==i)])
    return black, white