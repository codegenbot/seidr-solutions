code, guess = input(), input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_count, guess_count = {}, {}

for c in set(code):
    if c not in guess_count:
        code_count[c] = code.count(c)
for c in set(guess):
    if c not in code_count:
        guess_count[c] = guess.count(c)

white_pegs = sum(min(code_count.get(c, 0), guess_count.get(c, 0)) for c in set(code)) - black_pegs

print(max(0, white_pegs), black_pegs)