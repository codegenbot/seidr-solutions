code = input()
guess = input()

black_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in code) - black_pegs

print(white_pegs, black_pegs)