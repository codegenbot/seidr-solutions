def mastermind(code, guess):
    black = sum(code[i] == guess[i] for i in range(4))
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    white = sum(min(code_count[char], guess_count[char]) for char in code_count) - black
    return white, black