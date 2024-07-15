def snow_day(hours, ground_snow, rate_of_snow_fall, melting_rate):
    return (ground_snow + hours * rate_of_snow_fall) * (1 - melting_rate) ** hours

hours = int(input())
ground_snow = float(input())
rate_of_snow_fall = float(input())
melting_rate = float(input())

print(round(snow_day(hours, ground_snow, rate_of_snow_fall, melting_rate), 5))