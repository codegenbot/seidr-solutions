def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}
    
    white = sum(min(count, code_counts.get(c, 0)) - black 
                for c in set(guess))

    return black, white