Here is the solution:

def snow_day(hours, initial_snow, rate, melt_rate):
    return initial_snow + (hours * rate) - (hours * melt_rate)

# Example usage:
input_hours = int(input())
initial_snow = float(input())
rate = float(input())
melt_rate = float(input())

print(snow_day(input_hours, initial_snow, rate, melt_rate))