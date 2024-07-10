Here's the solution:

def solve_boolean(s):
    if s == 't':
        return True
    elif s == 'f':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid expression")
    else:
        for i, c in enumerate(s):
            if c == '&':
                return bool(eval(s[:i]) and eval(s[i+1:]))
            elif c == '|':
                return bool(eval(s[:i]) or eval(s[i+1:]))
   