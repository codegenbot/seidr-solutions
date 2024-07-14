from collections import Counter

def mastermind(code, guess):
    characters = "ARBYG"

    if len(code) != 4 or len(guess) != 4:
        return "Error: Code and guess must be 4-character strings"
    
    for c in code:
        if c not in characters:
            return "Error: Code contains an invalid character"
    
    for g in guess:
        if g not in characters:
            return "Error: Guess contains an invalid character"

    code_counts = dict(Counter(code).most_common())
    guess_counts = dict(Counter(guess).most_common())

    black_pegs = sum(1 for i in range(min(len(code), len(guess))) if code[i] == guess[i])
    
    white_pegs = 0
    for c, count in guess_counts.items():
        white_pegs += min(count, code_counts.get(c, 0)) - (code.count(c) if c in code else 0)

    return str(black_pegs) + "\n" + str(white_pegs)