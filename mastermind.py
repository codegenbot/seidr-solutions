def mastermind(code, guess):
    black = 0
    white = 0
    code_count = {char: code.count(char) for char in set(code)}
    guess_count = {char: guess.count(char) for char in set(guess)}

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[code[i]] -= 1
        elif code_count.get(guess[i], 0) > 0:
            code_count[guess[i]] -= 1

    white = sum(count for count in code_count.values() if count > 0)

    return str(black) + "\n" + str(white)