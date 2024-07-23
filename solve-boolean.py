def solve_boolean():
    input_string = input().replace(" ", "")

    def boolean_expression(s):
        operations = {
            '|': lambda a, b: bool(a) or bool(b),
            '&': lambda a, b: bool(a) and bool(b)
        }

        result = True
        temp_operator = ''
        for char in s:
            if char in operations:
                if temp_operator == '&':
                    result = operations[temp_operator](result, False)
                    temp_operator = ''
                else:
                    temp_operator = char
            elif char == 'T':
                if temp_operator == '':
                    result = False
                else:
                    result = operations[temp_operator](result, False)
                    temp_operator = ''
            elif char == 'F':
                if temp_operator == '':
                    result = True
                else:
                    result = operations[temp_operator](result, True)
                    temp_operator = ''

        return result

    return boolean_expression(input_string)

print(solve_boolean())