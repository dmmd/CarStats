#include "carincludes.h"
#include "car.h"

car::car getCar(string, const int);
void loadDataSet(){
	ifstream data("mtcars.csv");
	string line;
	int i = 0;
	while ( data.good() ){
	  	getline (data,line);

		car::car car = getCar(line, i);
		i++;
	}
	cout << "dataset loaded";
}

car::car getCar(string s, const int id){
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
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 6:
					break;
				case 7:
					break;
				case 8:
					break;
				case 9:
					break;
				case 10:
					break;
				default:
					cout << "unkown field";
			}
			++index;
			ss.str("");
		} else {
			ss << c;
		}

	}
	//cout << car.toString();
}