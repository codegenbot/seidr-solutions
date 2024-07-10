def mastermind(code, guess):
    count = [0, 0]
    for i in range(4):
        if code[i] == guess[i]:
            count[1] += 1
        elif code.count(guess[i]) > 0:
            count[0] += 1
    return count