```
def mastermind_code(code_guess):
    code = list(code_guess[0])
    guess = list(code_guess[1])
    black_pegs = sum([1 for c, g in zip(code, guess) if c == g])
    white_pegs = sum([min(1, code.count(g)) for g in guess]) - black_pegs
    return str(black_pegs), str(white_pegs)

print(mastermind_code(["WGYO", "WGYO"]))