def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("A")] += 1

    black_pegs = 0
    white_pegs = 0
    code_chars = [char for char in code]
    for i, char in enumerate(guess):
        if code[i] == char:
            black_pegs += 1
        elif code_counts[ord(char) - ord("A")] > 0 and char not in code_chars[:i]:
            code_counts[ord(char) - ord("A")] -= 1
            white_pegs += 1

    return str(white_pegs) + "\n" + str(black_pegs)