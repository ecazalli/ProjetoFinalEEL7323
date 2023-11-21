
#ifndef _CALENDAR_
#define _CALENDAR_

using namespace std;



class Calendar {
	bool Is_bissesto(int ano);
protected:
	int mo, day, yr;
public:
	Calendar (int m, int d, int y);
	void setCalendar (int m, int d, int y);
	void readCalendar(int& m, int& d, int& y);
	void advance ();
};

#endif
