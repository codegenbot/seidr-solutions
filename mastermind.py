from collections import Counter

code = input("Enter the code: ")
guess = input("Enter the guess: ")

assert len(code) == 4 and all(c in {"A", "B", "C", "D", "E", "F"} for c in code)
assert len(guess) == 4 and all(c in {"A", "B", "C", "D", "E", "F"} for c in guess)

code_freq = Counter(code)
guess_freq = Counter(guess)

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = (
    sum(min(code_freq[c], guess_freq[c]) for c, g in zip(code, guess)) - black_pegs
)

print(white_pegs, black_pegs)