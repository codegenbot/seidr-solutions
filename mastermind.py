code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(char), guess.count(char)) for char in set(code))

print(len(code) - white_pegs - black_pegs, black_pegs)