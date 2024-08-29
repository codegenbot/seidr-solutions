def mastermind(code, guess):
    code_counts = [0] * 6
    code_dict = {}

    for char in code:
        if char not in code_dict:
            code_dict[char] = 1
        else:
            code_dict[char] += 1
        code_counts[ord(char) - ord("A")] += 1

    black_pegs = 0
    white_pegs = 0

    for c, g in zip(code, guess):
        if c == g:
            black_pegs += 1
        elif code_dict.get(g) and code_counts[ord(g) - ord("A")]:
            white_pegs += 1
            code_counts[ord(g) - ord("A")] -= 1
            code_dict[g] -= 1

    return str(white_pegs) + "\n" + str(black_pegs)