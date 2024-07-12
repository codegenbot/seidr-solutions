code, guess = input(), input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_count = {c: code.count(c) for c in set(code)}
guess_count = {c: guess.count(c) for c in set(guess)}

white_pegs = sum(min(code_count[c], guess_count[c]) for c in set(code) if c in guess and code_count[c] != guess_count[c]) - black_pegs

print(max(0, white_pegs), black_pegs)