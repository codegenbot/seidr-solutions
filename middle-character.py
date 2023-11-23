import math


def middle_character(s):
    length = len(s)
    if length % 2 == 1:
        return s[length // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1]


middle_character("l8?h%\H~5hC-3/1OQ;%kJl):b}&S<U[")