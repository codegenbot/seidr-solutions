from collections import Counter

code = input()
guess = input()

code_freq = Counter(code)
guess_freq = Counter(guess)

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code_freq[c], guess_freq[c]) for c, g in zip(code, guess)) - black_pegs

print(white_pegs, black_pegs)