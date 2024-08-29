def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_count, "BOY")
    )
    black_pegs = sum(a == b for a, b in zip(code, guess))

    return str(4 - black_pegs) + "\n" + str(black_pegs)