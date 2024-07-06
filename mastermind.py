def mastermind(code, guess):
    char_count = defaultdict(int)
    for i, c in enumerate(guess):
        if c == code[i]:
            char_count["white"] += 1
        elif c in code and code.index(c) != i:
            char_count["black"] += 1
    return (char_count["white"], char_count["black"])