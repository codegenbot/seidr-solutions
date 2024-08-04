```
def solve(input_str):
    if input_str == 't':
        return True
    elif input_str == 'f':
        return False
    elif '&' in input_str and '|' in input_str:
        raise ValueError("Invalid expression")
    elif '&' in input_str:
        result = True
        for op, bit in zip(['&'], input_str.split('&')):
            if op == '&':
                result &= (bit == 't')
            else:
                raise ValueError("Invalid expression")
        return result
    elif '|' in input_str:
        result = False
        for op, bit in zip(['|'], input_str.split('|')):
            if op == '|':
                result |= (bit == 't')
            else:
                raise ValueError("Invalid expression")
        return result