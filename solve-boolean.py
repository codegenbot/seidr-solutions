def solve(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str and '|' in input_str:
        return eval(input_str.replace('True', '1').replace('False', '0'))
    elif '&' in input_str:
        return all(eval(x) for x in input_str.split('&'))
    elif '|' in input_str:
        return any(eval(x) for x in input_str.split('|'))