code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(
    min(code.count(c), guess.count(c))
    for c, g in zip(code, guess)
    if c != g
)

print(len(code) - black_pegs - white_pegs, black_pegs)