def middle_character(s):
    length = len(s)
    start_mid = length // 2
    end_mid = start_mid if length % 2 == 0 else start_mid
    return s[end_mid:end_mid+1]