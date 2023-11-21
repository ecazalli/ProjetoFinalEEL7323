#include"Clock.hpp"
#include"Calendar.hpp"

class ClockCalendar : public Clock, public Calendar {
public:
	ClockCalendar (int mt, int d, int y, int h, int m, int s, int pm);
	void advance ();
};
