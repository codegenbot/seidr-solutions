def mastermind(code, guess):
    count = [0, 0]
    for i in range(4):
        if code[i] == guess[i]:
            count[1] += 1
        elif str(guess[i]) in str(code):
            count[0] += 1
    return tuple(count)