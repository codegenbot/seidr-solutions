def mastermind(code, guess):
    black_pegs = sum(c == g for c, g in zip(code, guess))
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    white_pegs = sum(min(code_counts[c], guess_counts[c]) for c in code_counts)
    return white_pegs, black_pegs

code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])