def mastermind(code, guess):
    count_black = sum(1 for c in zip(code, guess) if c[0] == c[1])
    count_white = sum(min(code.count(c), guess.count(c)) - 1 for c in set(guess))
    return str(count_black), str(count_white)