def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1

    black_pegs = sum(a == b for a, b in zip(code, guess))
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_count, "BOY")) - black_pegs

    return str(white_pegs) + "\n" + str(black_pegs)