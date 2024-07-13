length = len(input("Enter string: "))
if length % 2 == 0:
    print(s[length//2-1:length//2+1])
else:
    print(s[length//2])