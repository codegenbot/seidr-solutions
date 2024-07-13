code = input()
guess = input()

white_pegs = sum(min(code.count(ch), guess.count(ch)) for ch in "ROYGBW")
black_pegs = sum(c == g for c, g in zip(code, guess))

print(white_pegs)
print(black_pegs)