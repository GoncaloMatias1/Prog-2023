#include <iostream>
#include <iomanip>
#include <string>

class Date {
  public:
    // constructors
    Date();
    Date(int year, int month, int day);
    Date(const std::string& year_month_day);
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // other methods
    bool is_valid() const; // tests date validity
    void write() const;    // writes the date as "yyyy/mm/dd"
  private:
    // attributes
    int year;
    int month;
    int day;
    // compute the number of days of month
    static int num_days(int year, int month);
};

