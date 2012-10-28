#ifndef __CarStats__Car__
#define __CarStats__Car__

#include <string>
#include <sstream>
using namespace std;

class car{
	int id;
	string make;
	float mpg;
	int cyl;
	float disp;
	int hp;
	float drat;
	float wt;
	float qsec;
	bool vs;
	bool am;
	int gear;
	int carb;
public:
	car(int);
	string toString();
	void setMake(string);
	string getMake();
	void setMpg(float);
	float getMpg();
	void setCyl(int);
	int getCyl();
	void setDisp(float);
	float getDisp();
	void setHp(int);
	int getHp();
	void setDrat(float);
	float getDrat();
	void setWeight(float);
	float getWeight();
	void setQsec(float);
	float getQsec();
	void setVs(bool);
	bool getVs();
	void setAm(bool);
	bool getAm();
	void setGear(int);
	int getGear();
	void setCarb(int);
	int getCarb();
    
};


#endif /* defined(__CarStats__Car__) */
