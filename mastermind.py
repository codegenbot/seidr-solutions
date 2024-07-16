def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")

    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = 0

    for c in set(code):
        count_code = code.count(c)
        count_guess = guess.count(c)
        white = min(count_code, count_guess)
        whites += white

    return str(min(4, whites-blacks)), str(blacks)

print(mastermind())