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
        elif char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == ')':
            operator = stack.pop()
            op2 = stack.pop()
            op1 = stack.pop()
            if operator == '&':
                stack.append(True if op1 == True and op2 == True else False)
            elif operator == '|':
                stack.append(True if op1 == True or op2 == True else False)
    return stack.pop() == True

if __name__ == '__main__':
    expression = 'T|F'
    print(evaluate(expression))
    expression = 'T&F'
    print(evaluate(expression))
    expression = 'T&T'
    print(evaluate(expression))
    expression = 'T|T'
    print(evaluate(expression))
    expression = 'F|F'
    print(evaluate(expression))
    expression = 'F&F'
    print(evaluate(expression))
    expression = 'T'
    print(evaluate(expression))
    expression = 'F'
    print(evaluate(expression))
    expression = '(T|F)&(F|T)'
    print(evaluate(expression))
    expression = '(T&F)|(F&T)'
    print(evaluate(expression))
    expression = '(T&T)|(F&F)'
    print(evaluate(expression))
    expression = '(T|T)&(F|F)'
    print(evaluate(expression))
    expression = '(T|F)&(F|T)&(T|F)&(F|T)'
    print(evaluate(expression))
    expression = '(T|F)&(F|T)&(T|F)&(F|T)&(T|F)&(F|T)&(T|F)&(F|T)'
    print(evaluate(expression))
