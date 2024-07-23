black = 0
correct_colors = [guess[i] if code[i] == guess[i] else '' for i in range(len(code))]
black = sum(correct_colors.count(str(code[i])) for i in range(len(code)))
white = len([c for c in code if c in guess and c != guess[guess.index(c)]])
return str(black) + "\n" + str(white)