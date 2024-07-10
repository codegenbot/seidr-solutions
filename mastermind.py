def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    
    white_pegs = 4 - black_pegs
    
    code_map = {c:0 for c in "BOYYG"}
    for c, count in zip(code, str(guess)):
        code_map[c] += count

    white_pegs -= sum(min(count, code_count[ord(c) - ord("B")]) for c, count in code_map.items() if count > 0)
    
    return str(black_pegs), str(white_pegs)