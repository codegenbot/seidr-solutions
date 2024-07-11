Here is the solution:

def snow_day(hours, current_snow, rate_of_fall, melting_rate):
    return round(current_snow + (rate_of_fall * hours) - ((melting_rate * hours) * current_snow), 5)

hours = int(input())
current_snow = float(input())
rate_of_fall = float(input())
melting_rate = float(input())

print(snow_day(hours, current_snow, rate_of_fall, melting_rate))