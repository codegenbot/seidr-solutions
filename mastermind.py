def mastermind(code, guess):
    black_pegs = sum(code[i] == guess[i] for i in range(len(code)))
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code))
    return white_pegs - black_pegs, black_pegs

code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])