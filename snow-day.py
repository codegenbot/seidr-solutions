Here is the solution:

def snow_day(hours, snow_ground, rate, melting_rate):
    return round((snow_ground + (rate * hours)) - ((melting_rate * hours) * (1 - math.pow(0.999, hours))), 5)

input_hours = int(input())
hours_to_snow = float(input())
rate_of_snowfall = float(input())
melting_rate_per_hour = float(input())

print(snow_day(input_hours, hours_to_snow, rate_of_snowfall, melting_rate_per_hour))