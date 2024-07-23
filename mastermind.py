def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    white_pegs = 0
    for c1, c2 in zip(code, guess):
        if c1 == c2 and c1 != c: 
            white_pegs += 1
    
    return str(black_pegs) + "\n" + str(white_pegs)