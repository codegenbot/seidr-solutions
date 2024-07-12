code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_count = {}
guess_count = {}

for c, g in zip(code, guess):
    if c not in code_count:
        code_count[c] = 0
    if g not in guess_count:
        guess_count[g] = 0
    code_count[c] += 1
    guess_count[g] += 1

white_pegs = sum(min(code_count.get(c, 0), guess_count.get(c, 0)) for c in set(code) & set(guess)) - black_pegs

print(max(0, white_pegs), black_pegs)