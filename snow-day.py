def snow_day(hours, snow_on_ground, snow_fall_rate, melt_per_hour):
    if hours == 0:
        return 0.0
    else:
        snow_on_ground += snow_fall_rate * hours
        if melt_per_hour > 0:
            snow_on_ground -= melt_per_hour * hours
        return max(snow_on_ground, 0.0)