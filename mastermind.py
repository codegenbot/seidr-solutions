def mastermind(code, guess):
    white_pegs = sum(min(code.count(char), guess.count(char)) for char in set(code))
    black_pegs = sum(code[i] == guess[i] for i in range(len(code)))
    white_pegs -= black_pegs
    return white_pegs, black_pegs


code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)