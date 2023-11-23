def middle_character(string):
    length = len(string)
    middle = length // 2

    while not string[middle].isalpha():
        middle += 1

    if length % 2 == 0:
        return string[middle - 1: middle + 1]
    else:
        return string[middle]