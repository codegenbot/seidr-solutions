def solveBoolean(input_string):
    if input_string == 'T':
        return True
    elif input_string == 'F':
        return False
    elif '&' in input_string and '|' in input_string:
        return eval(input_string.replace('&', 'and').replace('|', 'or'))