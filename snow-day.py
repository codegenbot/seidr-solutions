Here is the solution in Python:

def snow_day(hours, ground, rate, melt):
    return ground + (rate * hours) - (melt * hours)

hours = int(input())
ground = float(input())
rate = float(input())
melt = float(input())

print(snow_day(hours, ground, rate, melt))