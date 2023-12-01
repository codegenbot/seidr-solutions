def mastermind(code, guess):
    black = sum(c == g for c, g in zip(code, guess))
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    white = sum(min(code_count[c], guess_count[c]) for c in code_count) - black
    return white, black

code = input()
guess = input()
white, black = mastermind(code, guess)
print(white)
print(black)