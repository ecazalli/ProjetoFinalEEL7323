#include "include/Clock.hpp"

using namespace std;



Clock::Clock (int h, int s, int m, int pm){
	
	hr = h;
	min= m;
	sec = s;
	is_pm = pm;
}

void Clock:: setClock (int h, int s, int m, int pm){
	
	hr = h;
	min= m;
	sec = s;
	is_pm = pm;
}
void Clock::readClock (int& h, int& s,int& m, int& pm){
	h = hr;
	s = sec;
	m = min;
	pm = is_pm;		
}
	

void Clock::advance(){

	if (++sec == 60){
		sec = 0;
		min++;
		if(min == 60){
			min = 0;
			hr++;		
		}
		if(hr > 12){
			hr = 1;
			!is_pm;		
		}
	} 
}	





