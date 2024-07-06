
def mastermind(code, guess):
    char_count = defaultdict(int)
    for i, c in enumerate(code):
        if c == guess[i]:
            char_count["white"] += 1
        elif c in guess and guess.index(c) != i:
            char_count["black"] += 1
    return (char_count["white"], char_count["black"])