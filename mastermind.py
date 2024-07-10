def mastermind(code, guess):
    code_count = [0, 0]
    for c in code:
        if c == guess[0]:
            code_count[1] += 1
        elif c in guess:
            code_count[0] += 1
    return str(code_count[0]), str(code_count[1])