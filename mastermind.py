def mastermind(code, guess):
    black = 0
    white_counts = {}
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            if str(guess[i]) not in white_counts:
                white_counts[str(guess[i])] = 1
            else:
                white_counts[str(guess[i])] += 1
    return str(black) + "\n" + str(len([count for count in white_counts.values() if count > 0]))