int newSnow = static_cast<int>(snow + rateOfFall);
snow = static_cast<double>(newSnow) - (newSnow * meltRate / 100.0);