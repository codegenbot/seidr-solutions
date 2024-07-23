code = input()
guess = input()

black_pegs = sum(c == g and c != g for c, g in zip(code, guess))
white_pegs = sum(
    min(code.count(c), guess.count(c) - sum(c == g for g in guess[:i]))
    for i, (c, g) in enumerate(zip(code, guess))
    if c != g
)

print(len(code) - black_pegs - white_pegs, black_pegs)