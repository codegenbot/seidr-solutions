code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_temp = ''.join('X' if c == g else c for c, g in zip(code, guess))
guess_temp = ''.join('X' if c == g else c for c, g in zip(guess, code))

white_pegs = sum(min(code_temp.count(c), guess_temp.count(c)) for c in set(code + guess) if c != 'X' and c in code and c in guess)

print(white_pegs, black_pegs)