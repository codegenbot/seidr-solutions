Here is the solution:

def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    return initial_snow + (rate_of_fall * hours) - (melting_rate * hours)

hours = int(input())
initial_snow = float(input())
rate_of_fall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_fall, melting_rate))