code, guess = input("Enter 4-character code and guess (consisting of possible characters): ").strip().upper().split(' ')
white_pegs = sum(min(code.count(char), guess.count(char)) for char in set(guess))
black_pegs = sum(a == b for a, b in zip(code, guess))
print(white_pegs, black_pegs)