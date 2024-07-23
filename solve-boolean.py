def solve_boolean(expression):
    def evaluate(s):
        if "(" in s:
            i = 1
            for c in range(len(s)):
                if c == 0 or (s[c] == "(" and i > 1) or (s[c] == ")" and i < 1):
                    continue
                if s[c] == "(":
                    i += 1
                elif s[c] == ")":
                    i -= 1
                if i == 0:
                    return eval(s[:c]) and evaluate(s[c + 1 :])
        stack = []
        ops = 0
        for char in s:
            if char in {"T", "F"}:
                stack.append(char == "T")
            elif char in {"&", "|"}:
                while len(stack) > 1 and stack[-2] != "T" and stack[-2] != "F":
                    stack.pop()
                ops = {"&": all, "|": any}[char]
        return eval(ops(*stack))

    return evaluate(expression)