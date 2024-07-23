def mastermind(code, guess):
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    black_pegs = sum(c == g for c, g in zip(code, guess))
    white_pegs = sum(min(code_count[c], guess_count[c]) for c in code) - black_pegs
    return white_pegs, black_pegs


code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)