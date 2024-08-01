def mastermind(code, guess):
    return str(sum(1 for a, b in zip(guess, code) if a == b)), str(
        (
            code.count("".join(filter(lambda x: x == y, guess))) for y in set(guess)
        ).count(4)
    )