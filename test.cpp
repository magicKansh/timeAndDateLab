// Name: Ekansh Simgekar
// Date: 3/20/26
// Program Name: Time and Date Lab


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
// two above was used from the lesson taught earlier, only thing changed was setting the user input to the offset value
    time_t startTime, endTime;
    string answer;
    cout << "Spell Apple.  ";
    time(&startTime);

    cin >> answer;
    time(&endTime);
    double secondsTaken = difftime(endTime, startTime);
// looked at the ctime documentation to find difftime, a helpful tool to calculate time between action.
    cout << "Time taken: " << secondsTaken << " seconds.";

}
