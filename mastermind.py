def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord('O')] += 1
    correct_color_wrong_place = sum([min(count, guess.count(char)) - 1 for char, count in zip(code, code_count)])
    correct_color_correct_place = sum([1 for i in range(4) if code[i] == guess[i]])
    return str(correct_color_wrong_place) + "\n" + str(correct_color_correct_place)