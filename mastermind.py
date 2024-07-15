code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_temp = ''.join(c if c != g else 'X' for c, g in zip(code, guess))
guess_temp = ''.join(c if c != g else 'X' for c, g in zip(guess, code))

code_remaining = [c for c, g in zip(code, guess) if c != g and g != 'X']
guess_remaining = [g for c, g in zip(code, guess) if c != g and g != 'X']

white_pegs = sum(min(code_remaining.count(c), guess_remaining.count(c)) for c in set(code_remaining))

print(white_pegs, black_pegs)