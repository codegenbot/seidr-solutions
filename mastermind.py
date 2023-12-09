import collections
def mastermind(code, guess):
    black_pegs = sum(c == g for c, g in zip(code, guess))
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    common_chars = set(code_counts.keys()) & set(guess_counts.keys())
    white_pegs = sum(min(code_counts[char], guess_counts[char]) for char in common_chars) - black_pegs
    return white_pegs, black_pegs