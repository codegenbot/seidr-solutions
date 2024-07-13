expression = input()

if "|" in expression:
    print("True")
elif "&" in expression:
    print("False")
elif "t" in expression:
    print("True")
else:
    print("False")