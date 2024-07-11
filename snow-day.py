def snow_day():
    hours = int(input())
    snow_on_ground = float(input())
    snow_fall_rate = float(input())
    snow_melt_rate = float(input())

    snow_after_hours = snow_on_ground
    for i in range(hours):
        snow_after_hours = (
            snow_after_hours + snow_fall_rate - snow_melt_rate * snow_after_hours
        )

    print(snow_after_hours)


snow_day()