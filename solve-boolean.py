```
def solve_boolean(expression):
    def evaluate(expression, result=False):
        while len(expression) > 0:
            if expression[0] in ['T', 'F']:
                result = (expression[0] == 'T') == True
                return evaluate(expression[1:], result)
            elif expression[0] in ['&', '|']:
                operator = expression.pop(0)
                operand1 = (expression[0] == 'T') == True if len(expression) > 0 and expression[0] in ['T', 'F'] else None
                while len(expression) > 0 and expression[0] not in ['&', '|']:
                    expression.pop(0)
                operand2 = (expression[0] == 'T') == True if len(expression) > 0 and expression[0] in ['T', 'F'] else None
                if operator == '&':
                    result &= operand1 and operand2
                elif operator == '|':
                    result |= operand1 or operand2
        return result

    return evaluate(list(expression))