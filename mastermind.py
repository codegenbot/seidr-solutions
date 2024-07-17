def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1
    for i, char in enumerate(guess):
        if char == code[i]:
            guess_count[ord(char) - ord("B")] += 1
        else:
            code_count[ord(char) - ord("B")] += 1

    black_pegs = sum(1 for a, b in zip(code_count, guess_count) if a > 0 and b > 0)
    white_pegs = sum(min(a, b) for a, b in zip(code_count, guess_count)) - black_pegs
    return str(white_pegs), str(black_pegs)