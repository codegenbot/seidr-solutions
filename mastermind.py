def mastermind(code, guess):
    char_count = defaultdict(int)
    for i, c in enumerate(code):
        if c == guess[i]:
            char_count["white"] += 1
        else:
            for j in range(len(guess)):
                if guess[j] == c and j != i:
                    char_count["black"] += 1
                    break
    return (char_count["white"], len(code) - char_count["black"])