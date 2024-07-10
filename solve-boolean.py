def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str:
        a, b = input_str.split('&')
        return bool(int(a)) and bool(int(b))
    elif '|' in input_str:
        a, b = input_str.split('|')
        return bool(int(a)) or bool(int(b))