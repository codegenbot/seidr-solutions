def mastermind(code, guess):
    code_count = {}
    for char in code:
        if char in code_count:
            code_count[char] += 1
        else:
            code_count[char] = 1

    guess_count = {}
    for char in guess:
        if char in guess_count:
            guess_count[char] += 1
        else:
            guess_count[char] = 1

    black_pegs = sum([1 for i in range(4) if code[i] == guess[i]])
    white_pegs = sum([min(code_count.get(char, 0), guess_count.get(char, 0)) 
                      for char in set(guess)])
    return str(white_pegs) + "\n" + str(black_pegs)