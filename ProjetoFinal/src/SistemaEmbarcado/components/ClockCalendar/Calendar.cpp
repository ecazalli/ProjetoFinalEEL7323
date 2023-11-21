
#include "include/Calendar.hpp"


Calendar::Calendar (int m, int d, int y){
	
	mo = m;
	day =d; 
	yr  = y;
}
	
void Calendar::setCalendar(int m, int d, int y){
	mo = m;
	day =d; 
	yr  = y;	
}
void Calendar::readCalendar(int& m, int& d, int& y){
	m = mo;
	d = day;
	y = yr;	
}

void Calendar::advance(){
	day++;
	
	switch(mo){
		case(1):
		case(3):
		case(5):
		case(7):
		case(8):
		case(10):{
			if(day > 31){
				day = 1;
				mo++;
			}			
			break;
		}
		case(2):{
			if(Is_bissesto(yr)){
				 day++;
			}
			else{
				day = 1;
				mo++;
			}			
			break;
		}
		case(4):
		case(6):
		case(9):
		case(11):{
			if(day > 30){
				day = 1;
				mo++;
			}			
			break;
		}
		case(12):{
			if(day > 31){
				day = 1;
				mo = 1;
				yr++;
			}			
			break;
		}
			
	}
	
}

bool Calendar::Is_bissesto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

