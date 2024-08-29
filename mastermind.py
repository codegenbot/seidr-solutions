def mastermind(code, guess):
    code_counts = [0] * 6
    code_dict = {}
    white_pegs = 0
    black_pegs = 0

    for char in code:
        if char not in code_dict:
            code_dict[char] = 1
        else:
            code_dict[char] += 1
        code_counts[ord(char) - ord("A")] += 1

    for c, g in zip(code, guess):
        if c == g:
            black_pegs += 1
        elif code_dict.get(g):
            white_pegs += 1
            code_dict[g] -= 1
            code_counts[ord(g) - ord("A")] -= 1

    for i in range(6):
        while code_counts[i] > 0 and code_dict.get(chr(i + ord("A"))):
            code_counts[i] -= 1
            code_dict[chr(i + ord("A"))] -= 1
            if code_counts[i] == 0:
                break

    return str(white_pegs) + "\n" + str(black_pegs)