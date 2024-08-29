def mastermind(code, guess):
    count_black = 0
    count_white = 0
    code_counts = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            count_black += 1
        else:
            code_counts[ord(guess[i]) - ord("A")] += 1
    for i in range(4):
        if code[i] != guess[i] and code_counts[ord(code[i]) - ord("A")] > 0:
            count_white += 1
            code_counts[ord(code[i]) - ord("A")] -= 1
    return str(count_black) + "\n" + str(count_white)