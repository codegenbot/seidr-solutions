code = input()
guess = input()

black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code) if c not in (code[i] for i in range(4) if code[i] == guess[i])) - black_pegs

print(white_pegs, black_pegs)