code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
same_chars = sum(min(code.count(c), guess.count(c)) for c in set(code))

white_pegs = same_chars - black_pegs

print(max(white_pegs, 0), black_pegs)