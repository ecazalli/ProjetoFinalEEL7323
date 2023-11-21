#include "include/ClockCalendar.hpp"


ClockCalendar::ClockCalendar (int mt, int d, int y, int h, int m, int s, int pm) : Clock (h, m, s, pm), Calendar (mt, d, y){

}


void ClockCalendar::advance (){ // avan�ar o calend�rio, caso o clock 
	int wasPm = is_pm; // mude de PM para AM.
	Clock::advance();
	if (!wasPm && is_pm)
		Calendar::advance();
}
