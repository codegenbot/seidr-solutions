code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

white_pegs = sum(
    min(sum(c == x for x in code), sum(c == x for x in guess))
    for c, g in zip(code, guess)
)

print(white_pegs - black_pegs, black_pegs)