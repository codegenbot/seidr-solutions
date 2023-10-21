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
def evaluate(expr):
    stack = []
    for c in expr:
        if c == 'T':
            stack.append(True)
        elif c == 'F':
            stack.append(False)
        elif c == '|':
            right = stack.pop()
            left = stack.pop()
            stack.append(left | right)
        elif c == '&':
            right = stack.pop()
            left = stack.pop()
            stack.append(left & right)
    return stack[-1]
if __name__ == '__main__':
    expr = 'T&F|T'
    print(evaluate(expr))
