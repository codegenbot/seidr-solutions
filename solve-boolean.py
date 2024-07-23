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
                temp_operator = char
            elif char == 'T':
                result = operations[temp_operator](result, False)
            elif char == 'F':
                result = operations[temp_operator](result, True)
        return result