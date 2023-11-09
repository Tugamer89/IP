#include <iostream>

int remainingDays(float initialLiters, int dailyEvapPercentage, float minLiters) {
    int days = 0;
    float currentLiters = initialLiters;
    
    while (currentLiters > minLiters) {
        currentLiters -= initialLiters * dailyEvapPercentage / 100;
        ++days;
    }
    
    return days;
}
