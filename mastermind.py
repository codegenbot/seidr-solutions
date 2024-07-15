```
def mastermind(code, guess):
    code_freq = {c: code.count(c) for c in set(code)}
    guess_freq = {c: guess.count(c) for c in set(guess)}

    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(min(code_freq.get(c, 0), guess_freq.get(c, 0)) 
                for c in set(guess) & set(code)) - black
    return str(black) + "\n" + str(4 - black)