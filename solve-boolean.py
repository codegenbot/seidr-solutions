s = input()  
s = ' '.join(s.split())  
bool_map = {'T': True, 'F': False}  
operator_map = { '|': lambda a,b: a or b, '&': lambda a,b: a and b }  

def solve_boolean(s):  
    stack = []  
    for c in s[::-1]:  
        if c in bool_map:  
            stack.append(bool_map[c])  
        elif c in operator_map:  
            op2 = stack.pop()  
            op1 = stack.pop()  
            stack.append(operator_map[c](op1, op2))  

    return stack[0]