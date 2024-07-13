def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1
    white_pegs = sum(
        min(count, guess.count(c))
        for count, c in zip(code_count, "abcdefghijklmnopqrstuvwxyz"[65:71])
    )
    black_pegs = sum(
        (count == 1 and guess.count(c)) or (code.count(c) == 1)
        for count, c in zip(code_count, "abcdefghijklmnopqrstuvwxyz"[65:71])
    )
    return str(4 - black_pegs), str(black_pegs)