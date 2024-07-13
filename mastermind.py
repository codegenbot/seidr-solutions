```
def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}
    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])
    white_pegs = sum(min(code_counts.get(c, 0), guess_counts.get(c, 0)) - 1
                     for c in set(guess) if c != code[i] and code_counts.get(c, 0))
    return black_pegs, white_pegs