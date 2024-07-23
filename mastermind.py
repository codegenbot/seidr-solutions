code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(
    min(code.count(c), guess.count(c))
    for c in set(code)
    if c in code and c in guess and code.index(c) != guess.index(c)
)

print(len(code) - black_pegs - white_pegs, black_pegs)