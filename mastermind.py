```
def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    black = sum(1 for i, c in enumerate(code) if c == guess[i])
    white = sum(min(code_counts[c], guess_counts[c]) for c in set(guess)) - black

    return f"{black}\n{white}"