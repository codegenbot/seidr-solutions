from collections import Counter

code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_counter = Counter(code)
guess_counter = Counter(guess)

white_pegs = sum(min(code_counter[c], guess_counter[c]) for c in set(code) if c in guess)

white_pegs -= black_pegs

print(max(white_pegs, 0), black_pegs)