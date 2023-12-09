def mastermind():
    code = input()
    guess = input()

    black_pegs = 0
    code_copy = list(code)
    guess_copy = list(guess)

    for i in range(4):
        if code_copy[i] == guess_copy[i]:
            black_pegs += 1
            code_copy[i] = '-'
            guess_copy[i] = '-'

    white_pegs = len([x for x in code_copy if x != '-']) - black_pegs

    return white_pegs, black_pegs

print(mastermind())