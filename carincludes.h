#ifndef CarStats_carincludes_h
#define CarStats_carincludes_h

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

#include "car.h"

using namespace std;

void testCar();
vector<car::car> loadDataSet();
car::car getCar(const string, const int);

#endif
