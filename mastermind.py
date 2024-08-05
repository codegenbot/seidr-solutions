def mastermind(code, guess):
    black_pegs = sum(c == g for c, g in zip(code, guess))
    total_chars = collections.Counter(code) & collections.Counter(guess)
    white_pegs = sum(total_chars.values()) - black_pegs
    return white_pegs, black_pegs


code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)