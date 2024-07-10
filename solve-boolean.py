```
def solve_boolean(expression):
    if not expression:
        return False

    stack = []
    operators = []
    temp = ''

    for char in expression:
        if char.upper() in ['T', 'F']:
            if temp: 
                stack.append(eval(temp))
                temp = ''
            else:
                stack.append(char == 'T')
        elif char.upper() in ['|', '&']:
            while temp and temp[-1].isalpha():
                temp += char
            if temp:
                stack.append(eval(temp))
                temp = ''
            operators.append(char)
        else:
            temp += char

    if temp: 
        stack.append(eval(temp))

    result = stack[0]
    for operator in operators:
        operand2 = stack.pop()
        operand1 = stack.pop()
        if operator == '|':
            result = operand1 or operand2
        elif operator == '&':
            result = operand1 and operand2

    return result