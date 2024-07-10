def solve_boolean(expression):
    if not expression:
        return False

    stack = []
    curr_operand = ''
    for char in expression:
        if char.upper() == '(':
            stack.append(char)
        elif char.upper() in ['T', 'F']:
            curr_operand += char
        elif char.upper() in ['&', '|']:
            while stack and stack[-1].upper() == '(':
                stack.pop()
            if stack:
                operand2 = stack.pop()
                operand1 = eval(curr_operand)
                if char.upper() == '&':
                    stack.append(operand1 and operand2)
                elif char.upper() == '|':
                    stack.append(operand1 or operand2)
                curr_operand = ''
            else:
                stack.append(eval(curr_operand))
                curr_operand = ''
        elif char.upper() == ')':
            while stack and stack[-1].upper() != '(':
                stack.pop()
            stack.pop()

    return stack[0]