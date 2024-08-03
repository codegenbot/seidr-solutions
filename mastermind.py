code = input()
guess = input()

white_pegs = sum(min(code.count(char), guess.count(char)) for char in set(code))
black_pegs = sum(c == g for c, g in zip(code, guess))

print(white_pegs)
print(black_pegs)