def middle_character(s):
    length = len(s)
    if length % 2 != 0:
        return s[length // 2]
    else:
        start_index = length // 2 - 1
        end_index = length // 2
        for i in range(start_index, end_index + 1):
            if s[i].isalnum():
                return s[start_index:end_index+1]
        return ''