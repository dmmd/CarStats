#include "car.h"

car::car(int id_in){
	id = id_in;
}

void car::setMake(string make_in){
	make = make_in;
}

string car::getMake(){
	return make;
}

void car::setMpg(float mpg_in){
	mpg = mpg_in;
}

float car::getMpg(){
	return mpg;
}

void car::setCyl(int cyl_in){
	cyl = cyl_in;
}

int car::getCyl(){
	return cyl;
}

void car::setDisp(float disp_in){
	disp = disp_in;
}

float car::getDisp(){
	return disp;
}

void car::setHp(int hp_in){
	hp = hp_in;
}

int car::getHp(){
	return hp;
}

void car::setDrat(float drat_in){
	drat = drat_in;
}

float car::getDrat(){
	return drat;
}

void car::setWeight(float weight_in){
	wt = weight_in;
}

float car::getWeight(){
	return wt;
}

void car::setQsec(float qsec_in){
	qsec = qsec_in;
}

float car::getQsec(){
	return qsec;
}

void car::setVs(bool vs_in){
	vs = vs_in;
}

bool car::getVs(){
	return vs;
}

void car::setAm(bool am_in){
 	am = am_in;
}

bool car::getAm(){
	return am;
}

void car::setGear(int gear_in){
	gear = gear_in;
}

int car::getGear(){
	return gear;
}

void car::setCarb(int carb_in){
	carb = carb_in;
}

int car::getCarb(){
	return carb;
}


string car::toString(){
	stringstream ss;
	ss << "make:\t" << make
	<< "\nmpg:\t" << mpg
	<< "\ncyl:\t" << cyl
	<< "\ndisp:\t" << disp
	<< "\nhp:\t" << hp
	<< "\ndrat:\t" << drat
	<< "\nweight:\t" << wt
	<< "\nqsec:\t" << qsec
	<< "\nvs:\t" << vs
	<< "\nam:\t" << am
	<< "\ngear:\t" << gear
	<< "\ncarb:\t" << carb
	<< endl << endl;
	return ss.str();
}


