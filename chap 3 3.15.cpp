#include <iostream>

class Date {

 private:

    int month = 1;

    int day = 1;

    int year = 1900;

 public:

    Date(int, int, int);

    // SETTERS

    void setMonth(int);

    void setDay(int);

    void setYear(int);

    // GETTERS

    int getMonth() const;

    int getDay() const;

    int getYear() const;

    void displayDate() const;

};

Date::Date(int m, int d, int y) {

    setMonth(m);

    setDay(d);

    setYear(y);

}

// SETTERS

void Date::setMonth(int m) { month = (m > 0 && m <= 12) ? m : 1; }

void Date::setDay(int d) { day = d; }

void Date::setYear(int y) { year = y; }

// GETTERS

int Date::getMonth() const { return month; }

int Date::getDay() const { return day; }

int Date::getYear() const { return year; }

// prints the date mm/dd/yyyy

void Date::displayDate() const {

    std::cout << getMonth() << "/" << getDay() << "/" << getYear() << std::endl;

}

int main(int argc, const char *argv[]) {

    Date date1(12, 7, 1983);

    Date date2(14, 23, 1255);

    date1.displayDate();

    date2.displayDate();

    return 0;

}
