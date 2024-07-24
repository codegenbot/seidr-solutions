def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    black_pegs = sum([c == g and c != "B" for c, g in zip(code, guess)])
    white_pegs = sum(
        min(code_count[i], guess.count(chr(i + ord("A")))) for i in range(6)
    )
    return str(white_pegs) + "\n" + str(black_pegs)