def mastermind(code, guess):
    black = 0
    white = 0

    for char in set(guess):
        code_count = code.count(char)
        guess_count = guess.count(char)

        black += min(code_count, guess_count)
        white += abs(code_count - guess_count)

    return str(black) + "\n" + str(white)


print(mastermind("abcde", "abcd"))