def middle_character(s):
    length = len(s)
    start_mid = length // 2
    end_mid = start_mid
    return s[end_mid:end_mid+1] if length % 2 else s[start_mid:start_mid+1]