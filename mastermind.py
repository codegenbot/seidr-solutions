code = input()
guess = input()

black_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code)) - black_pegs

print(max(0, white_pegs), max(0, black_pegs))