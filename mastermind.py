code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_remaining = [c for i, c in enumerate(code) if guess[i] != c]
guess_remaining = [g for i, g in enumerate(guess) if code[i] != g]
white_pegs = sum(min(code_remaining.count(char), guess_remaining.count(char)) for char in set(code_remaining))

print(len(code) - white_pegs - black_pegs, black_pegs)