```
def solve_boolean(input_str):
    stack = []
    for c in input_str:
        if c == '&':
            stack.append('&')
        elif c == '|':
            while stack and stack[-1] == '&':
                stack.pop()
            if not stack:
                return True
            else:
                return False
        else:
            if stack and stack[-1] == '&':
                stack.pop()