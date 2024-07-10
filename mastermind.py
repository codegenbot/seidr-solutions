def mastermind(code, guess):
    black = 0
    white = 0
    code_count = {char: code.count(char) for char in set(code)}
    guess_count = {char: guess.count(char) for char in set(guess)}

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1

    white = sum(
        count for char, count in code_count.items() if count > guess_count.get(char, 0)
    )

    return str(black) + "\n" + str(white)