Here is the solution:

def mastermind(code, guess):
    code_count = [0, 0]
    for i in range(4):
        if code[i] == guess[i]:
            code_count[1] += 1
        elif str(guess[i]).count(str(code[i])) > 0:
            code_count[0] += 1
    return code_count