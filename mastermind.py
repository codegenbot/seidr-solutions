def mastermind(code, guess):
    white = 0
    black = 0

    for i in range(4):
        if list(guess)[i] == list(code)[i]:
            black += 1
        elif str(list(code)[i]) in str(list(guess)):
            white += 1

    return f"{black}\n{white}"