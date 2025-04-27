#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int time_started_hours, time_started_minutes;
    char colon;
    string day_of_week;
    int num_minutes_talked;
    double total_cost;
    double rate_in_dollars;

    cout << "Please input the time the call started.  (use 24-hour notation): " << endl;
    cin >> time_started_hours >> colon >> time_started_minutes;

    cout << "Please enter the day of the week: Mo, Tu, We, Th, Fr, Sa, or Su: " << endl;
    cin >> day_of_week;

    cout << "Please enter the number of minutes talked: " << endl;
    cin >> num_minutes_talked;

    if (day_of_week == "Mo" || day_of_week == "Tu" || day_of_week == "We" || day_of_week == "Th" || day_of_week == "Fr")
        if (time_started_hours >= 8 && time_started_hours <= 18)
        {
            rate_in_dollars = .40;
        }
        else
        {
            rate_in_dollars = .25;
        }
    else
    {
        rate_in_dollars = .15;
    }

    total_cost = num_minutes_talked * rate_in_dollars;

    cout << fixed << setprecision(2);

    cout << "The cost of the call is: $" << total_cost << endl;

    return 0;
}