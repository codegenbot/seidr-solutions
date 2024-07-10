def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1
    black_pegs = sum(c == g and c != "0" for c, g in zip(code, guess))
    white_pegs = sum(min(code_count.count(c), guess.count(c)) for c in set(guess))
    return str(white_pegs), str(black_pegs)