def middle_character(input_str):
    str_len = len(input_str)
    if str_len % 2 == 1:
        return input_str[str_len // 2]
    else:
        return input_str[(str_len - 1) // 2 : (str_len + 1) // 2]