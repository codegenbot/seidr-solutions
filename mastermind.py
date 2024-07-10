def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {g: guess.count(g) for g in set(guess)}

    white_pegs = sum(min(count, code_counts.get(g, 0)) for g, count in zip(guess, guess_counts.values()))
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])

    return str(black_pegs), str(white_pegs)