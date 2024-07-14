def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = {c: code.count(c) for c in set(code)}
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code_counts:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)