def mastermind(code, guess):
    white = 0
    black = 0
    code_count = {}
    guess_count = {}

    for char in code:
        if char in code_count:
            code_count[char] += 1
        else:
            code_count[char] = 1

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess[i] in code_count and code_count[guess[i]] > 0:
            white += 1
            code_count[guess[i]] -= 1

    return str(white) + "\n" + str(black)