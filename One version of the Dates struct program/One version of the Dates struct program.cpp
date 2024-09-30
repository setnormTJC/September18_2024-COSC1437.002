
#include <iostream>
#include <vector>

struct Date
{
    int month, day, year; 
};
    
void printDates(std::vector<Date> dates)
{
    for (auto& date : dates)
    {
        std::cout << date.month << "/" << date.day << "/" << date.year << "\n";
    }
}

int main()
{
    //25/09/2024 -> format in some European countries
    Date firstDate = { 9, 25, 2024 };
    Date secondDate = { 1, 1, 2000 };
    
    std::vector<Date> dates = 
    { 
        firstDate, secondDate 
    };

    Date thirdDate = { 7, 4, 1776 };
    dates.push_back(thirdDate);

    printDates(dates);
    //std::cout << "Hello World!\n";
}
