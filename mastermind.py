```
def count_black_pegs(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    return black

print(f"Black: {count_black_pegs(code, guess)}, White: {4 - count_black_pegs(code, guess)}")