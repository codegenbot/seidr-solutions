```python
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    result = None
    stack = [expression]
    while stack:
        current = stack.pop()
        if "&" in current:
            a, b = current.split("&")
            result = bool(a) and (bool(b) if not result is None else bool(result))
        elif "|" in current:
            a, b = current.split("|")
            result = bool(a) or (bool(b) if not result is None else bool(result))
        else:
            if result is None:
                return eval("T" if current == "T" else "F", {"T": True, "F": False})
            stack.append(str(int(not bool(result))) + (current if not expression.startswith("|") else ""))