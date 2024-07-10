def mastermind(code, guess):
    black = 0
    white = 0

    code_count = {char: code.count(char) for char in set(code)}
    guess_count = {char: guess.count(char) for char in set(guess)}

    for c1, g1 in zip(code, guess):
        if c1 == g1:
            black += 1
            code_count[c1] -= 1
            guess_count[g1] -= 1

    white = sum(
        count1 - count2
        for char, (count1, count2) in zip(code_count.items(), guess_count.values())
        if count1 > 0 and count2 > 0
    )

    return str(black) + "\n" + str(white)