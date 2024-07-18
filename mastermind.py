code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_count = {}
guess_count = {}

for c in code:
    code_count[c] = code_count.get(c, 0) + 1

for g in guess:
    guess_count[g] = guess_count.get(g, 0) + 1

white_pegs = sum(min(code_count.get(c, 0), guess_count.get(c, 0)) for c in code if c in guess)

print(white_pegs, black_pegs)