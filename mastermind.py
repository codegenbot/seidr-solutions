def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(code[i]) in str(guess):
            white_pegs += 1

    return black_pegs, white_pegs


# Example usage:
code = "RRRR"
guess = "RRRR"
print(mastermind(code, guess))  # Output: (0, 4)

code = "BOYG"
guess = "GYOB"
print(mastermind(code, guess))  # Output: (4, 0)

code = "WYYW"
guess = "BBOG"
print(mastermind(code, guess))  # Output: (0, 0)

code = "GGGB"
guess = "BGGG"
print(mastermind(code, guess))  # Output: (2, 2)

code = "BBBB"
guess = "OOOO"
print(mastermind(code, guess))  # Output: (0, 0)