def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("A")] += 1

    black_pegs = 0
    white_pegs = 0
    code_index = 0
    for char in guess:
        if char == code[code_index]:
            black_pegs += 1
            code_index += 1
        elif code_counts[ord(char) - ord("A")] > 0:
            white_pegs += 1
            code_counts[ord(char) - ord("A")] -= 1

    return str(black_pegs) + " " + str(white_pegs)