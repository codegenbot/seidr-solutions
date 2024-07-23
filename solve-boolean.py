def solve_boolean(expression):
    def helper(s):
        if "(" in s:
            i = s.index("(")
            j = s.index(")")
            return helper(s[:i] + helper(s[i + 1 : j]) + s[j + 1 :])
        elif any(char in {"&", "|"} for char in s):
            while len(stack) > 1 and stack[-2] != "T" and stack[-2] != "F":
                stack.pop()
            if s[0] == "&":
                stack.append(stack.pop() and stack.pop())
            else:
                stack.append(not stack.pop() or stack.pop())
        elif "T" in s and "F" in s:
            stack.append(s == "T")
        return all(stack)

    stack = []
    result = helper(expression)
    return result