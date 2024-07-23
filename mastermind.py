from collections import defaultdict

code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_remaining = [c for i, c in enumerate(code) if guess[i] != c]
guess_remaining = [g for i, g in enumerate(guess) if code[i] != g]

code_count = defaultdict(int)
for char in code_remaining:
    code_count[char] += 1

guess_count = defaultdict(int)
for char in guess_remaining:
    guess_count[char] += 1

white_pegs = sum(min(code_count[char], guess_count[char]) for char in set(code_count))

print(len(code) - white_pegs - black_pegs, black_pegs)