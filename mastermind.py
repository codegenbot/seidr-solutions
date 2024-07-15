import collections

code = input("Enter the code: ").strip()
guess = input("Enter the guess: ").strip()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_char_count = collections.Counter(code)
guess_char_count = collections.Counter(guess)
white_pegs = (
    sum(
        min(code_char_count[c], guess_char_count[c])
        for c in code_char_count
        if c in guess_char_count
    )
    - black_pegs
)

print(white_pegs, black_pegs)