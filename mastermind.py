code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
common_elements = sum(min(code.count(c), guess.count(c)) for c in set(code))
black_pegs -= common_elements - sum(c == g for c, g in zip(code, guess))

white_pegs = max(sum(min(code.count(c), guess.count(c)) for c in set(code)) - black_pegs, 0)

print(white_pegs, black_pegs)