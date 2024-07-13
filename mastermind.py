def mastermind(code, guess):
    white = 0
    black = 0
    code_count = {}
    for char in code:
        if char in code_count:
            code_count[char] += 1
        else:
            code_count[char] = 1

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[code[i]] -= 1
        elif code_count.get(code[i], 0):
            white += 1
            code_count[code[i]] -= 1
    return black, white