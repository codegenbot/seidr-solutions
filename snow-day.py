def snow_day(hours, initial_snow, snow_fall_rate, snow_melt_rate):
    snow_on_ground = initial_snow
    for _ in range(hours):
        snow_on_ground += snow_fall_rate
        snow_on_ground -= snow_on_ground * snow_melt_rate
    return snow_on_ground


hours = int(input())
initial_snow = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, initial_snow, snow_fall_rate, snow_melt_rate)
print(result)