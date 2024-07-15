code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

exclude_chars = set()
for c, g in zip(code, guess):
    if c == g:
        black_pegs -= 1
        exclude_chars.add(c)

white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code + guess) if c not in exclude_chars)

print(white_pegs, black_pegs)