```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return round(initial_snow + (rate_of_snowfall * hours) - ((melting_rate * hours) if hours > 0 else 0),2)

print(snow_day(0, 0.0, 15.0, 0.0))
print(snow_day(15, 15.0, 15.0, 0.15))
print(snow_day(20, 19.99, 9.999, 0.999))
print(snow_day(20, 19.99, 9.999, 0.0))
print(snow_day(10, 0.0, 1.0, 0.0))