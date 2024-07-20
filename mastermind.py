def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    code_dict = {c: count for c, count in zip(code, "BOYGB")}
    guess_dict = {c: count for c, count in zip(guess, "BOYGB")}

    black_pegs = sum((code_dict[c] == guess_dict[c]) for c in "BOYGB")

    white_pegs = 4 - black_pegs
    for c in code:
        if c != guess[ord(c) - ord("B")]:
            white_pegs -= min(code_count[ord(c) - ord("B")], guess.count(c))
    
    return str(white_pegs), str(black_pegs)