def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    count_black = 0
    count_white = 0
    for i in range(4):
        if code[i] == guess[i]:
            count_black += 1
            code_count[ord(code[i]) - ord("A")] -= 1
        elif str(guess[i]) in code:
            count_white += 1
            code_count[ord(str(guess[i])) - ord("A")] -= 1

    for i in range(6):
        if code_count[i] > 0:
            count_white += code_count[i]

    return str(count_black) + "\n" + str(count_white)