def mastermind(code, guess):
    code_count = [code.count(c) for c in set(code)]
    guess_count = [guess.count(c) for c in set(guess)]

    black = 0
    white = 0
    position_count = [False]*4

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            position_count[i] = True
        elif position_count[i]:
            continue
        else:
            for j in range(6):
                if ord(guess[i]) - ord('A') == j and code_count[j] > 0:
                    white += 1
                    code_count[j] -= 1
                    break

    return black, white