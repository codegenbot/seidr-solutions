hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = round(initial_snow, 2)
    for _ in range(hours):
        new_snow = round(current_snow + rate_of_snowfall, 2)
        melted_snow = min(new_snow, round((new_snow - initial_snow) * melting_rate, 2))
        current_snow = round(new_snow - melted_snow, 2)
    return round(current_snow, 2)