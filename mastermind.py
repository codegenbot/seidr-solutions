code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(
    min(code.count(c), guess.count(c))
    for c in set(code)
    if c != guess[(code + guess).find(c, 4)]
    if c in guess
)

print(len(code) - black_pegs - white_pegs, black_pegs)