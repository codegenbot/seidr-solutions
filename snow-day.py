def snow_day(hours, current_snow, snow_fall_rate, melting_rate):
    for _ in range(hours):
        current_snow += snow_fall_rate
        current_snow *= 1 - melting_rate
    return round(current_snow, 15)


hours = int(input())
current_snow = float(input())
snow_fall_rate = float(input())
melting_rate = float(input())
result = snow_day(hours, current_snow, snow_fall_rate, melting_rate)
print(result)