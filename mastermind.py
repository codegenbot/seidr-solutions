code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(
    min(code.count(guess[i]), guess.count(guess[i]))
    for i in range(len(guess))
) - black_pegs

print(len(code) - white_pegs - black_pegs, black_pegs)