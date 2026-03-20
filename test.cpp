#include <ctime>
#include <iostream>
#include <string>
using namespace std;


int main() {
    time_t current = time(nullptr);
    cout << "The current local date and time is:  " << ctime(&current);

    tm* utc_time = gmtime(&current);
    cout << asctime(utc_time);
    int utcOffset;
    cout << "Enter a time zone offset in hours: ";
    cin >> utcOffset;
    current += utcOffset * 3600;
    tm* pdt_time = gmtime(&current);
    cout << "Current time in the specified time zone: " << asctime(pdt_time);

    time_t startTime, endTime;
    string answer;
    cout << "Spell Apple.  ";
    time(&startTime);

    cin >> answer;
    time(&endTime);
    double secondsTaken = difftime(endTime, startTime);

    cout << "Time taken: " << secondsTaken << " seconds.";

}