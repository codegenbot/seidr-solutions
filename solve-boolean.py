def solve_boolean():
    input_string = input().replace(" ", "")
    return boolean_expression(input_string)

def boolean_expression(s):
    operations = {
        '|': lambda a, b: bool(a) or bool(b),
        '&': lambda a, b: bool(a) and bool(b)
    }

    result = None
    temp_operator = ''
    for char in s:
        if char in operations:
            temp_operator = char
        elif char == 'T':
            if not result:
                result = True
            else:
                result = operations[temp_operator](result, True)
        elif char == 'F':
            if not result:
                result = False
            else:
                result = operations[temp_operator](result, False)

    return result