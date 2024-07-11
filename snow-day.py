def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow_after_hours = snow_on_ground
    for i in range(hours):
        snow_after_hours = (
            snow_after_hours + snow_fall_rate - (snow_after_hours * snow_melt_rate)
        )
    return snow_after_hours


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)