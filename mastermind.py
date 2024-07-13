def mastermind(code, guess):
    white_pegs = sum(min(code.count(char), guess.count(char)) for char in set(code))
    black_pegs = sum(code[i] == guess[i] for i in range(4))
    return white_pegs - black_pegs, black_pegs


code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])