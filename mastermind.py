def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    code_count = {c: code.count(c) for c in set(code)}
    guess_count = {c: guess.count(c) for c in set(guess)}
    white = sum(min(code_count[c], guess_count[c]) for c in set(guess))
    return str(white - black), str(black)