Here is the corrected code:

def snow_day(hours, ground_snow, rate_of_snow_fall, melting_rate):
    return round((ground_snow + hours * rate_of_snow_fall) * (1 - melting_rate) ** hours, 5)

hours = int(input())
ground_snow = float(input())
rate_of_snow_fall = float(input())
melting_rate = float(input())

print(snow_day(hours, ground_snow, rate_of_snow_fall, melting_rate))