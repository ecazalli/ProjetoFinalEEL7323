#ifndef _CLOCK_
#define _CLOCK_


using namespace std;


class Clock {
protected:
	int hr, min, sec, is_pm;
public:
	Clock (int h, int s, int m, int pm);
	void setClock (int h, int s, int m, int pm);
	void readClock (int& h, int& s,int& m, int& pm);
	void advance ();
};

#endif
