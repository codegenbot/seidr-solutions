def mastermind(code, guess):
    code_counts = [0]*6  # Counts of each color in the code
    for c in code:
        code_counts[ord(c)-65] += 1

    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(min(code_counts[ord(c)-65], guess.count(c)) for c in set(guess) & set(code)) - black
    return str(black) + "\n" + str(4 - black)