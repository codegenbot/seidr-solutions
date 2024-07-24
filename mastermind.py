black_pegs = 0
white_pegs = 0
for i in range(len(code)):
    if guess[i] == code[i]:
        black_pegs += 1
    elif guess[i] in code:
        white_pegs += 1
str(black_pegs) + " " + str(white_pegs)