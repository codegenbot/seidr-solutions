def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    temp_exp = ''
    for char in expression:
        if char in ops:
            if temp_exp:
                stack.append(eval(f"{temp_exp}{ops[char][0]}{ops[char][1]}"))
            else:
                stack.append(ops[char](stack.pop(), stack.pop()))
            temp_exp = ''
        elif char == '(':
            temp_exp += char
        elif char == ')':
            if temp_exp:
                stack.append(eval(temp_exp))
                temp_exp = ''
            else:
                return False
        else:
            temp_exp += 'True' if char == 'T' else 'False'
    if temp_exp:
        stack.append(eval(temp_exp))
    return stack[0]