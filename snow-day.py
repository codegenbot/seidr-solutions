def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(int(hours)):
        snow += snow_fall_rate
        snow = snow - (snow * snow_melt_rate)
    return snow

hours, snow_on_ground, snow_fall_rate, snow_melt_rate = map(float, input().split())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)