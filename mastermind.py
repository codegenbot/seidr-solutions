def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0] * 6
    guess_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_count[ord(code[i]) - ord("A")] += 1
            guess_count[ord(guess[i]) - ord("A")] += 1

    white = sum(min(count, guess_count[ord(c) - ord("A")]) for c in set(code))

    return str(black) + "\n" + str(white)