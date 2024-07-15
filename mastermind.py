code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_remaining = [c for c, g in zip(code, guess) if c != g]
guess_remaining = [g for c, g in zip(code, guess) if c != g]

white_pegs = sum(min(code_remaining.count(c), guess_remaining.count(c)) for c in set(code_remaining)

print(white_pegs, black_pegs)