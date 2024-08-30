Here is the solution:

def mastermind(code, guess):
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)

    black_pegs = sum(min(count1, count2) for count1, count2 in zip(code_counts.values(), guess_counts.values()))
    white_pegs = 4 - black_pegs

    return str(white_pegs) + "\n" + str(black_pegs)