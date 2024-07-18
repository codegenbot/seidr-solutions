code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

white_pegs = sum(
    min(code.count(c), guess.count(c)) - (1 if c == g else 0)
    for c, g in zip(code, guess)
)

print(white_pegs, black_pegs)