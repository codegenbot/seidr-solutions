def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for i in range(4):
        code_count[ord(code[i]) - ord("B")] += 1
        guess_count[ord(guess[i]) - ord("B")] += 1

    black_pegs = sum(min(code_count, guess_count) for _ in range(4))
    white_pegs = 4 - black_pegs

    return str(white_pegs), str(black_pegs)