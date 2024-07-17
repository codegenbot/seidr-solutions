```
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall  # add new snowfall
        snow = min(snow + rate_of_fall, 1000)  # assume max snow is 1000 (arbitrary)
        snow -= melting_rate  # melt existing snow
        snow = max(0, snow)  # ensure no negative snow
    return snow