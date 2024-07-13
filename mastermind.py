def get_clue(code, guess):
    count_black = 0
    count_white = 0
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            count_black += 1
        else:
            code_counts[ord(code[i]) - ord("A")] += 1
            guess_counts[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        black = min(code_counts[i], guess_counts[i])
        count_white += black
        code_counts[i] -= black
        guess_counts[i] -= black

    return str(count_black) + "\n" + str(count_white)