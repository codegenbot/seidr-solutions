Here is the solution:

def mastermind(code, guess):
    code_count = [0, 0]
    for c in range(4):
        if guess[c] == code[c]:
            code_count[1] += 1
        elif guess.count(code[c]) > 0:
            code_count[0] += 1
    return code_count