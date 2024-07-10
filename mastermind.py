def mastermind(code, guess):
    black = 0
    white = 0
    code_count = {char: code.count(char) for char in set(code)}
    guess_count = {char: guess.count(char) for char in set(guess)}

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess_count.get(guess[i], 0) > 0:
            white += 1
            guess_count[guess[i]] -= 1

    while any(count > 0 for count in code_count.values()):
        for char in set(code):
            if code_count[char] > 0 and guess_count.get(char, 0) > 0:
                white += 1
                code_count[char] -= 1
                guess_count[char] -= 1

    return str(black) + "\n" + str(white)