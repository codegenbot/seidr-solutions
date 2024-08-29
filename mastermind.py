def mastermind(code, guess):
    white = 0
    black = 0
    code_count = {c: code.count(c) for c in set(code)}
    guess_count = {c: guess.count(c) for c in set(guess)}

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1

    white += sum(
        (
            min(count, guess_count.get(c, 0))
            for c, count in code_count.items()
            if c != code[i]
        )
    )

    return str(black) + "\n" + str(white)