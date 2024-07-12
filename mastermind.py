from collections import Counter

code, guess = input(), input()

code_counter = Counter(code)
guess_counter = Counter(guess)

black_pegs = sum(c == g for c, g in zip(code, guess))

white_pegs = sum(min(code_counter[c], guess_counter[c]) for c in (code_counter.keys() & guess_counter.keys())) - black_pegs

print(max(0, white_pegs), black_pegs)