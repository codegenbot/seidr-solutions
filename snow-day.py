hours = float(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(int(hours)):
        snow = round(snow + snow_fall_rate - (snow * snow_melt_rate), 16)
    return snow

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(round(result, 16))