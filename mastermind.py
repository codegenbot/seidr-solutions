if __name__ == "__main__":
    code = str(input("Enter Mastermind code: "))
    guess = str(input("Enter your guess: "))
    black_pegs = 0
    white_pegs = 0
    code_counts = {}
    for char in code:
        if char not in code_counts:
            code_counts[char] = 1
        else:
            code_counts[char] += 1

    for i in range(len(guess)):
        if guess[i] == code[i]:
            black_pegs += 1
        elif str(code).count(str(guess[i])) > 0:
            white_pegs += 1
    print(str(black_pegs) + " " + str(white_pegs))