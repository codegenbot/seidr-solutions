def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1
    for i, char in enumerate(guess):
        if char == code[i]:
            code_count[ord(char) - ord("B")] -= 1
        else:
            guess_count[ord(char) - ord("B")] += 1

    black_pegs = sum(
        1 for count in zip(code_count, guess_count) if count[0] > 0 and count[1] > 0
    )
    white_pegs = sum(min(count[0], count[1]) for count in zip(code_count, guess_count))

    return str(white_pegs), str(black_pegs)