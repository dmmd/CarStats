#include "carincludes.h"


int main(){
	//testCar();
	loadDataSet();
	return EXIT_SUCCESS;
}

void testCar(){
	car::car c(7);
	c.setMake("Mazda X4");
	c.setMpg(23.0);
	c.setCyl(6);
	c.setDisp(160.5);
	c.setHp(200);
	c.setDrat(3.90);
	c.setWeight(2.620);
	c.setQsec(16.46);
	c.setAm(true);
	c.setVs(false);
	c.setCarb(4);
	c.setGear(4);
	cout << c.toString();
}