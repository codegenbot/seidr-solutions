code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

white_pegs = sum(
    min(code.count(c), guess.count(c)) 
    for c, g in zip(code, guess) if c != g and c not in set(code[i] for i in range(4) if code[i] == guess[i])
)

print(white_pegs, black_pegs)