code = input()
guess = input()

black_pegs = sum(c == g and (code:=code[:i]+' '+code[i+1:]) for i, (c, g) in enumerate(zip(code, guess)))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess))

print(white_pegs - black_pegs, black_pegs)