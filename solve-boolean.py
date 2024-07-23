```
def solve_boolean(expression):
    def evaluate(s):
        if '(' in s:
            i = 1
            for c in range(len(s)):
                if s[c] == '(':
                    i += 1
                elif s[c] == ')':
                    i -= 1
                if i == 0:
                    return eval(s[:c]) and evaluate(s[c+1:].strip('()'))
        stack = []
        ops = 0
        for char in s:
            if char in {'T', 'F'}:
                stack.append(char == 'T')
            elif char in {'&', '|'}:
                while len(stack) > 1 and not (stack[-2] and stack[-1]):
                    stack.pop()
                ops = {'&': all, '|': any}[char]
        return ops(*stack)
    return int(evaluate(expression))