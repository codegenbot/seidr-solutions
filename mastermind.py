```
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    correct_colors = sum(min(code_count[ord(c) - ord("B")], 
                              guess_count[ord(g) - ord("B")]) 
                          for c, g in zip(code, guess) if c == g)
    black_pegs = correct_colors
    for i in range(6):
        black_pegs += min(code_count[i], guess_count[i])

    for c, g in zip(code, guess):
        if c == g:
            black_pegs += 1
            code_count[ord(c) - ord("B")] -= 1
            guess_count[ord(g) - ord("B")] -= 1

    white_pegs = sum(min(code_count[i], guess_count[i]) for i in range(6))
    return str(black_pegs), str(white_pegs)