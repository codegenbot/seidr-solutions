def mastermind(code, guess):
    char_count = defaultdict(int)
    for i, c in enumerate(code):
        if c == guess[i]:
            char_count[c] += 1
    return (char_count.get("W", 0), len(code) - sum(char_count.values()))