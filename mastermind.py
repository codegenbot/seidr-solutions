code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

white_pegs = sum(
    min(code.count(c), guess.count(c))
    for i, (c, g) in enumerate(zip(code, guess)) if c != g and c not in guess[:i]
) - black_pegs

print(white_pegs, black_pegs)