```
def solve(input_str):
    if input_str == 't':
        return True
    elif input_str == 'f':
        return False
    elif '&' in input_str and '|' in input_str:
        raise ValueError("Invalid expression")
    while '&' in input_str or '|' in input_str:
        if '|' in input_str:
            a, b = input_str.split('|')
            input_str = str(bool(a)) + (not bool(b) and 'f' or 't')
        elif '&' in input_str:
            a, b = input_str.split('&')
            input_str = str(bool(a)) and str(bool(b))
    return input_str == 'true'