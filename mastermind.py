code, guess = input(), input()
black_pegs = sum(c == g for c, g in zip(code, guess))
code_unmatched = [c for i, c in enumerate(code) if code[i] != guess[i] and code[i] not in code_unmatched]
guess_unmatched = [g for i, g in enumerate(guess) if code[i] != guess[i] and guess[i] not in guess_unmatched]
white_pegs = sum(min(code_unmatched.count(c), guess_unmatched.count(c)) for c in set(code_unmatched))
print(white_pegs, black_pegs)