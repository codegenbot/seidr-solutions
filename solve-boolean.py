def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False')
    expression = expression.replace('|', 'or').replace('&', 'and')
    
    stack = []
    operators = set(['and', 'or', 'True', 'False'])
    precedence = {'and': 1, 'or': 0, 'True': 2, 'False': 2}
    
    i = 0
    while i < len(expression) - 2:
        if expression[i] == ' ':
            i += 1
            continue
        
        if expression[i:i+3] in operators:
            operator = expression[i:i+3]
            while stack and stack[-1] in operators and precedence[stack[-1]] > precedence[operator]:
                operand2 = stack.pop()
                operator = stack.pop()
                operand1 = stack.pop()
                result = f'({operand1} {operator} {operand2})'
                stack.append(result)
            stack.append(operator)
            i += 3
        else:
            j = i
            while j < len(expression) and expression[j] != ' ':
                j += 1
            operand = expression[i:j]
            stack.append(operand)
            i = j
    
    while len(stack) >= 3:
        operand2 = stack.pop()
        operator = stack.pop()
        operand1 = stack.pop()
        result = f'({operand1} {operator} {operand2})'
        stack.append(result)
    
    return eval(stack[0])