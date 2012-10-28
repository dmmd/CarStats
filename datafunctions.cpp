#include "carincludes.h"




void loadDataSet(){
	ifstream data("mtcars.csv");
	string line;
	int i = 0;
	while ( data.good() ){
	  	getline (data,line);
		car::car car = getCar(line, i);
		cout << car.toString();
		
	}
	cout << "dataset loaded";
}

car::car getCar(const string s, const int id){
	car::car car(id);
	stringstream ss;
	int index = 0;
	for(int i = 0; i < s.length(); ++i){		
		char c = s[i];
		if(c == ';'){
			//cout << index << ": " << ss.str() << "\n";
			switch(index){
			 	case 0:
					car.setMake(ss.str());
					break;
				case 1:
					car.setMpg(atof(ss.str().c_str()));
					break;
				case 2:
					car.setCyl(atoi(ss.str().c_str()));
					break;
				case 3:
					car.setDisp(atof(ss.str().c_str()));
					break;
				case 4:
					car.setHp(atoi(ss.str().c_str()));
					break;
				case 5:
					car.setDrat(atof(ss.str().c_str()));
					break;
				case 6:
					car.setWeight(atof(ss.str().c_str()));
					break;
				case 7:
					car.setQsec(atof(ss.str().c_str()));
					break;
				case 8:
					car.setVs(atoi(ss.str().c_str()));
					break;
				case 9:
					car.setAm(atoi(ss.str().c_str()));
					break;
				case 10:
					car.setGear(atoi(ss.str().c_str()));
					break;
				case 11:
					car.setCarb(atoi(ss.str().c_str()));
					break;
				default:
					cout << "unknown field";
			}
			++index;
			ss.str("");
		} else {
			ss << c;
		}

	}
	return car;
}