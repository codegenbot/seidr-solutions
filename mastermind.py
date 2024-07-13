def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("A")] += 1
    for i, char in enumerate(guess):
        if char == code[i]:
            guess_count[ord(char) - ord("A")] += 1
        else:
            code_count[ord(char) - ord("A")] += 1

    black_pegs = sum(1 for a, b in zip(code_count, guess_count) if a and b)
    white_pegs = len(guess) - black_pegs

    return str(white_pegs), str(black_pegs)