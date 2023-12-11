code_count.subtract(guess_count)
for color in code_count:
    white_pegs += max(code_count[color], 0)
return int(white_pegs), int(black_pegs)