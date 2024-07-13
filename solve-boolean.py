```
from functools import reduce

def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    temp_stack = []
    for char in expression:
        if char != ' ': 
            if char not in 'TF':
                if char == '(':
                    temp_stack.append(char)
                elif char == ')':
                    while temp_stack and temp_stack[-1] != '(':
                        stack.append(ops[stack.pop()](stack.pop(), stack.pop()))
                    temp_stack.pop()
                else:
                    if temp_stack and temp_stack[-1] == '(':
                        stack.append(char)
                    else:
                        temp_stack.append(char)
            elif char in 'TF':
                while temp_stack and (char == ')' or temp_stack[-1] in ops):
                    if temp_stack[-1] == '(':
                        break
                    stack.append(ops[stack.pop()](stack.pop(), stack.pop()))
                stack.extend(reversed(temp_stack))
                temp_stack = []

    while stack and stack[-1] in ops:
        stack.append(ops[stack.pop()](stack.pop(), stack.pop()))

    return 'T' if stack[-1] else 'F'