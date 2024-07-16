def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snowfall = rate_of_snowfall * hours
    melting = melting_rate * hours
    return initial_snow + snowfall - melting

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))