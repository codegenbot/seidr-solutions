Here is the solution:

def snow_day(hours, on_ground, rate, melt_rate):
    return (on_ground + rate * hours) - (melt_rate * hours)

hours = int(input())
on_ground = float(input())
rate = float(input())
melt_rate = float(input())

print(snow_day(hours, on_ground, rate, melt_rate))