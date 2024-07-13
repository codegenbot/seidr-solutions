```
def mastermind(code, guess):
    correct_color_wrong_place = 0
    correct_color_correct_place = 0
    code_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            correct_color_correct_place += 1
        else:
            code_count[ord(guess[i]) - ord('A')] += 1
    for i in range(4):
        if code[i] != guess[i] and code_count[ord(guess[i]) - ord('A')] > 0:
            code_count[ord(guess[i]) - ord('A')] -= 1
            correct_color_wrong_place += 1
    return str(correct_color_wrong_place) + "\n" + str(correct_color_correct_place)