```
def solveBoolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str and '|' in input_str:
        raise Exception('Invalid expression')
    elif '&' in input_str:
        operands = input_str.split('&')
        return reduce(lambda x, y: x and bool(y), map(str.lower, operands)) if len(operands) > 1 else bool(operands[0])
    elif '|' in input_str:
        operands = input_str.split('|')
        return reduce(lambda x, y: x or bool(y), map(str.lower, operands)) if len(operands) > 1 else bool(operands[0])