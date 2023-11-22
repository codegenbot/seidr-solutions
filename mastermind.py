def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6
    guess_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            if "A" <= code[i] <= "F":
                code_count[ord(code[i]) - ord("A")] += 1
            if "A" <= guess[i] <= "F":
                guess_count[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white_pegs += min(code_count[i], guess_count[i])

    return white_pegs, black_pegs


code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)