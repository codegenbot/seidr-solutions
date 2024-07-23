def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow_amount = snow_on_ground
    for _ in range(int(hours)):
        snow_amount = round(snow_amount + snow_fall_rate - snow_amount * snow_melt_rate, 15)
    return snow_amount

hours, snow_on_ground, snow_fall_rate, snow_melt_rate = map(float, input().split())
result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)