Here's the solution:

def solve_boolean(s):
    stack = []
    result = False
    
    for c in s:
        if c == 'T':
            result = True
        elif c == 'F':
            result = False
        elif c == '&':
            stack.append(result)
            result = False
        elif c == '|':
            b = stack.pop()
            result = result and b
        
    return result