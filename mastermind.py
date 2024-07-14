def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_freq = {}
    guess_freq = {}

    for char in set(code):
        code_freq[char] = code.count(char)
        guess_freq[char] = guess.count(char)

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(code[i]) in guess_freq and guess_freq[str(code[i])] > 0:
            white_pegs += 1
            guess_freq[str(code[i])] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)