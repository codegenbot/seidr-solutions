def snow_day():
    hours = int(input())
    snow_ground = float(input())
    snow_fall_rate = float(input())
    snow_melt_rate = float(input())
    snow_on_ground = snow_ground

    for _ in range(hours):
        snow_on_ground += snow_fall_rate
        snow_on_ground -= min(snow_on_ground, snow_melt_rate)

    print(snow_on_ground)


snow_day()