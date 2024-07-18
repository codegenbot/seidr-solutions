code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

white_pegs = sum(
    max(0, min(code.count(c), guess.count(c))) 
    for c, g in zip(code, guess)
)

print(white_pegs - black_pegs, black_pegs)