def solve.Boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str:
        left, right = input_str.split('&')
        return Boolean(left) and Boolean(right)
    elif '|' in input_str:
        left, right = input_str.split('|')
        return Boolean(left) or Boolean(right)