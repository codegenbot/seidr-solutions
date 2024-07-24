code = input()
guess = input()

black = sum(c == g for c, g in zip(code, guess))
total = sum(min(code.count(c), guess.count(c)) for c in set(code))

print(total - black)
print(black)