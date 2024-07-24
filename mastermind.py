def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    black_pegs = sum(
        [min(code_count[i], guess.count(chr(ord("A") + i))) for i in range(6)]
    )
    white_pegs = len(guess) - black_pegs
    return str(black_pegs) + "\n" + str(white_pegs)