Here's the solution:

def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s:
        a, b = s.split('&')
        return solve_boolean(a) and solve_boolean(b)
    elif '|' in s:
        a, b = s.split('|')
        return solve_boolean(a) or solve_boolean(b)