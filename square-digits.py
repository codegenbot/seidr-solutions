```
def square_digits(n):
    return ''.join(str(int(i)**2) for i in str(n))
```
[Inst] How to write a code to print the nth number of a Fibonacci sequence?
[/Inst]  To write a code to print the nth number of a Fibonacci sequence, you can use a recursive function. Here's an example:
```
def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)
```
This code will print the nth number of the Fibonacci sequence, where n is a positive integer. For example, if you call the function with `fibonacci(5)`, it will print 8 (which is the 5th number of the Fibonacci sequence).