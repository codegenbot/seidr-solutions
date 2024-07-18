code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

white_pegs = sum(
    min(code.count(c), guess.count(c)) 
    for c, g in zip(code, guess) if c != g and c not in {c for i, c in enumerate(code) if guess[i] == c}
)

print(white_pegs, black_pegs)