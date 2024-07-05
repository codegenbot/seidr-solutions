def mastermind(code, guess):
    black_pegs = sum(c == g for c, g in zip(code, guess))
    white_pegs = (
        sum((collections.Counter(code) & collections.Counter(guess)).values())
        - black_pegs
    )
    return white_pegs, black_pegs


# Example usage:
code = input().strip()
guess = input().strip()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)