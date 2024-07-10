def mastermind(code, guess):
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    
    white_pegs = 0
    code_counts = [0, 0, 0, 0, 0, 0]
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    for i in range(4):
        if guess[i] in (c for c in "BOYYG"):
            white_pegs += min(code_counts[ord(guess[i]) - ord("B")], 1)
    
    return str(black_pegs), str(white_pegs)