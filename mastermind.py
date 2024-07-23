code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
common_elements = sum(min(code.count(c), guess.count(c)) for c in set(code))
black_pegs -= common_elements - sum(c == g for c, g in zip(code, guess))

white_pegs = max(0, common_elements - black_pegs)

print(white_pegs, black_pegs)