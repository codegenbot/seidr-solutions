def mastermind(code, guess):
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_pegs = sum(min(code_count[ord(c) - ord("B")], guess.count(c)) for c in set(guess)) - black_pegs

    return str(black_pegs), str(white_pegs)