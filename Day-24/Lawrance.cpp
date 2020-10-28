#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int sleepHour;
        int sleepMin;
        int awakeHour;
        int awakeMin;
        char delimiter;
        cin >> sleepHour >> delimiter >> sleepMin;
        cin >> awakeHour >> delimiter >> awakeMin;
        int totalSleepMinutes = (60 * awakeHour + awakeMin) - (60 * sleepHour + sleepMin);
        if(totalSleepMinutes < 0) {
            totalSleepMinutes = totalSleepMinutes + 24 * 60;
        }
        int hours = totalSleepMinutes / 60;
        int mins = totalSleepMinutes % 60;
        cout << hours << " hours " << mins << " minutes" << endl;
    }
    
    return 0;
}
