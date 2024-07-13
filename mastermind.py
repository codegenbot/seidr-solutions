def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {g: guess.count(g) for g in set(guess)}

    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum(min(0, code_counts.get(c, 0) - 1) + 
                min(0, guess_counts.get(g, 0) - 1) for c in set(guess) if c != g)

    return str(black), str(len(code)-black-((sum(code_counts.values()) - black) + (sum(guess_counts.values()) - len(guess)+black)))