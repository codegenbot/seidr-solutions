def mastermind(code, guess):
    code_counts = [0] * 6
    black = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_counts[ord(guess[i]) - ord('A')] += 1

    white = sum(count for count in code_counts if count > 0)
    return str(black) + "\n" + str(white)