def solveBoolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str and "|" in input_str:
        raise ValueError("Invalid expression")
    elif "&" in input_str:
        return all(x == "T" for x in input_str)
    elif "|" in input_str:
        return any(x == "T" for x in input_str)


print(solveBoolean(input("Enter a Boolean expression: ")))