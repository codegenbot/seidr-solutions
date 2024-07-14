```Python
def paired_digits(s):
    return sum(int(d1) for i, d1 in enumerate(s) if i < len(s)-1 and d1==s[i+1])

if __name__ == "__main__":
    s = input("Enter a string of digits: ")
    print(paired_digits(s))