"""
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""

def evaluate(expression):
    stack = []
    for char in expression:
        if char == ' ':
            continue
        elif char == '&':
            stack.append(char)
        elif char == '|':
            stack.append(char)
        elif char == 't':
            stack.append(char)
        elif char == 'f':
            stack.append(char)
        elif char == ')':
            operator = stack.pop()
            op2 = stack.pop()
            op1 = stack.pop()
            if operator == '&':
                stack.append('t' if op1 == 't' and op2 == 't' else 'f')
            elif operator == '|':
                stack.append('t' if op1 == 't' or op2 == 't' else 'f')
    return stack.pop() == 't'

if __name__ == '__main__':
    expression = 't|f'
    print(evaluate(expression))
    expression = 't&f'
    print(evaluate(expression))
    expression = 't&t'
    print(evaluate(expression))
    expression = 't|t'
    print(evaluate(expression))
    expression = 'f|f'
    print(evaluate(expression))
    expression = 'f&f'
    print(evaluate(expression))
    expression = 't'
    print(evaluate(expression))
    expression = 'f'
    print(evaluate(expression))
    expression = '(t|f)&(f|t)'
    print(evaluate(expression))
    expression = '(t&f)|(f&t)'
    print(evaluate(expression))
    expression = '(t&t)|(f&f)'
    print(evaluate(expression))
    expression = '(T|T)&(F|F)'
    print(evaluate(expression))
    expression = '(T|F)&(F|T)&(T|F)&(F|T)'
    print(evaluate(expression))
    expression = '(T|F)&(F|T)&(T|F)&(F|T)&(T|F)&(F|T)&(T|F)&(F|T)'
    print(evaluate(expression))
