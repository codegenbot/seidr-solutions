for c, g in zip(input("Enter the Mastermind code: "), input("Enter your guess: ")):
    if c == g:
        black_pegs += 1
    elif input("Enter the Mastermind code: ").count(g) > 0:
        white_pegs += 1

print(f"Black pegs: {black_pegs}, White pegs: {white_pegs}")