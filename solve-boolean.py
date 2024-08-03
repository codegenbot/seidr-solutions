def solve_boolean(s):
    if s == 't':
        return True
    elif s == 'f':
        return False
    elif '&' in s and '|' in s:
        raise Exception("Invalid expression")
    else:
        stack = []
        for char in s[::-1]:
            if char in ['&', '|']:
                b2 = stack.pop()
                b1 = stack.pop()
                if char == '&':
                    stack.append(b1 and b2)
                elif char == '|':
                    stack.append(b1 or b2)
            else:
                stack.append(char != 'f')
        return stack[0]