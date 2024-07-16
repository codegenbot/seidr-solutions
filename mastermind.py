```
def mastermind(code, guess):
    correct_colors = sum(c1 == c2 for c1, c2 in zip(code, guess))
    black_peg = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif code.index(guess[i]) != i:
            correct_colors -= 1
    white_peg = 4 - black_peg - correct_colors
    return f"{black_peg}\n{white_peg}"