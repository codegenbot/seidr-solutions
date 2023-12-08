def middle_character(s):
    length = len(s)
    if length % 2 == 1:
        return s[length // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1]

input_string = input()
output_string = middle_character(input_string)
print(output_string)