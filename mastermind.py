def mastermind(code, guess):
    char_count = defaultdict(int)
    for i, c in enumerate(code):
        if c == guess[i]:
            char_count[c] += 1
        elif c in guess:
            char_count[c] += 1
    return (sum(char_count.values()), len(code) - sum(char_count.values()))