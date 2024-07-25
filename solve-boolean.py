def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str and '|' in input_str:
        raise ValueError("Invalid expression")
    else:
        for op, val in zip(['&', '|'], [input_str.count('&'), input_str.count('|')]):
            if val > 1:
                raise ValueError("Invalid expression")
        result = eval(input_str.replace('T', 'True').replace('F', 'False'))
        return result