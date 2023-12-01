def mastermind_code_clue(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_dict = collections.defaultdict(int)
    guess_dict = collections.defaultdict(int)

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_dict[code[i]] += 1
            guess_dict[guess[i]] += 1

    for color in code_dict:
        white_pegs += min(code_dict[color], guess_dict[color])

    return white_pegs, black_pegs

code = input()
guess = input()
white_pegs, black_pegs = mastermind_code_clue(code, guess)
print(white_pegs)
print(black_pegs)