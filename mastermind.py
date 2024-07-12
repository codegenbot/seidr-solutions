code, guess = input(), input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_count = {c: code.count(c) for c in set(code)}
guess_count = {c: guess.count(c) for c in set(guess)}

white_pegs = sum(min(code_count.get(c, 0), guess_count.get(c, 0)) - (c == g) for c, g in zip(code, guess)

print(max(0, white_pegs), black_pegs)