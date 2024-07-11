def mastermind(code, guess):
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code))
    black_pegs = sum(c == g for c, g in zip(code, guess))
    return white_pegs - black_pegs, black_pegs


code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])