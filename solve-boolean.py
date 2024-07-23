```
def solve_boolean(expression):
    def evaluate(s):
        if '(' in s:
            i = 0
            for c in s:
                if c == '(':
                    i += 1
                elif c == ')':
                    i -= 1
                if i == 0 and s.index(c) > 0:
                    return eval('({})'.format(s[:s.index(c)])) and evaluate(s[s.index(c)+1:])
        stack = []
        ops = 0
        for char in s:
            if char in {'T', 'F'}:
                stack.append(char == 'T')
            elif char in {'&', '|'}:
                while len(stack) > 1 and stack[-2] != 'T' and stack[-2] != 'F':
                    stack.pop()
                ops = {'&': all, '|': any}[char]
        while len(stack) > 1:
            stack.pop()
        return eval(ops(*stack))
    return evaluate(expression)