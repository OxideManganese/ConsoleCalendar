// ‘ункци€ дл€ расчета количества дней в мес€це. 
int GetDaysInMonth(int year, int month) {
    int daysInMonth;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        }
        else {
            daysInMonth = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    }
    else {
        daysInMonth = 31;
    }
    return daysInMonth;
}

// ‘ункци€ дл€ вычислени€ дн€ недели дл€ заданной даты.
char GetStartDay(int year, int month) {
    if (month < 1 || month > 12) return -1;
    if (month == 1 || month == 2) {
        year--;
        month += 12;
    }
    return (year + year / 4 - year / 100 + year / 400 + (13 * (month + 1)) / 5 + 1) % 7 + 1;
}