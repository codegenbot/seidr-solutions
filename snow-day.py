def snow_day(hours, initial_snow, snow_fall_rate, melt_rate):
    snow_on_ground = initial_snow
    for i in range(hours):
        snow_on_ground += snow_fall_rate
        snow_on_ground -= melt_rate * initial_snow
        if snow_on_ground < 0:
            snow_on_ground = 0
    return snow_on_ground

hours = int(input())
initial_snow = float(input())
snow_fall_rate = float(input())
melt_rate = float(input())

result = snow_day(hours, initial_snow, snow_fall_rate, melt_rate)
print(result)