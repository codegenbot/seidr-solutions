import re
def solve_boolean(expression):
    result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
    if result:
        left, right = result.groups()
        return solve_boolean(left) | solve_boolean(right)
    elif expression == "t":
        return True
    else:
        return False
  stack = []
  for char in expression:
      if char == "t" or char == "f":
          stack.append(char)
      elif char == "|":
          right = stack.pop()
          left = stack.pop()
          stack.append(left | right)
      elif char == "&":
          right = stack.pop()
          left = stack.pop()
          stack.append(left & right)
  return stack[0] if stack else False