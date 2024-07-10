def mastermind(code, guess):
    code_count = {c: code.count(c) for c in set(code)}
    guess_count = {c: guess.count(c) for c in set(guess)}

    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    
    white_pegs = sum(min(code_count.get(c, 0), guess_count.get(c, 0)) - (code[i] == guess[i]) for i, c in enumerate(guess))

    return str(black_pegs), str(white_pegs)