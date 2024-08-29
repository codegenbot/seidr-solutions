def solve_boolean(input_string):
    if input_string == 't':
        return True
    elif input_string == 'f':
        return False
    elif '&' in input_string:
        a, b = input_string.split('&')
        return bool(a) and bool(b)
    else:
        a, b = input_string.split('|')
        return bool(a) or bool(b)