#include <algorithm>

double snow_melt_amount = std::min(snow_on_ground, snow_on_ground + snow_fall_rate - snow_on_ground * snow_melt_proportion);