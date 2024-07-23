code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in (set(code) & set(guess)) if c in code)

print(max(white_pegs, 0), black_pegs)