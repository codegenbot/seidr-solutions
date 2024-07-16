code = input()
guess = input()

black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
total_count = sum(min(code.count(c), guess.count(c)) for c in set(code))

white_pegs = total_count - black_pegs

print(white_pegs)
print(black_pegs)