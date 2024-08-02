def mastermind(code, guess):
    white_pegs = sum(min(code.count(ch), guess.count(ch)) for ch in set(code))
    black_pegs = sum(a == b for a, b in zip(code, guess))
    return white_pegs - black_pegs, black_pegs


code = input()
guess = input()
print(*mastermind(code, guess))