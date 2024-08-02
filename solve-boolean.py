```
def solve_boolean(input_str):
    if input_str == 't':
        return True
    elif input_str == 'f':
        return False
    else:
        if '&' in input_str and '|' in input_str:
            raise ValueError("Invalid expression")
        bool_values = {'T': True, 'F': False}
        result = bool_values[input_str[0]]
        for op, value in zip(['&', '|'], input_str[1:].split()):
            if op == '&':
                result = result and bool_values[value]
            elif op == '|':
                result = result or bool_values[value]
        return result