def mastermind(code, guess):
    correct_colors = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_peg = 4 - correct_colors
    black_peg = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
    return f"{black_peg}\n{white_peg}"