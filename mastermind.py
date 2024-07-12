from collections import Counter

code = input("Enter the code: ")
guess = input("Enter the guess: ")

if len(code) != 4 or len(guess) != 4 or not all(c in '123456' for c in code) or not all(c in '123456' for c in guess):
    print("Invalid input. Both code and guess should be 4-character strings consisting of 6 possible characters.")
else:
    code_freq = Counter(code)
    guess_freq = Counter(guess)

    black_pegs = sum(c == g for c, g in zip(code, guess))
    white_pegs = sum(min(code_freq[c], guess_freq[c]) for c, g in zip(code, guess)) - black_pegs

    print(white_pegs, black_pegs)