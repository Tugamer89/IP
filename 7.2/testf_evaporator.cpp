#include <iostream>

using namespace std;

int remainingDays(float initialLiters, int dailyEvapPercentage, float minLiters) {
    // dynamic programming
    /*
    int days = 0;
    float currentLiters = initialLiters;
    
    while (currentLiters >= minLiters) {
        currentLiters -= initialLiters * dailyEvapPercentage / 100;
        ++days;
    }
    
    return days;
    */

    // static programming
    return max(0, static_cast<int>((100 - (minLiters/initialLiters * 100)) / dailyEvapPercentage + 1));
}

int main() {
    float initialLiters, minLiters;
    int dailyEvapPercentage;

    cout << "Inserire litri iniziali: ";
    cin >> initialLiters;

    cout << "Inserire litri minimi: ";
    cin >> minLiters;

    cout << "Inserire percentuale di evaporazione giornaliera: ";
    cin >> dailyEvapPercentage;

    cout << "L'evaporatore rimane attivo per " << remainingDays(initialLiters, dailyEvapPercentage, minLiters) << " giorni" << endl;

    return 0;
}
