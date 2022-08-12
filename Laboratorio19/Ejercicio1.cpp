#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Regresion_Simple{
public:
	pair<float,float> operator()(vector<pair<float,float>>& vecx){
		float x = 0, y = 0, xy = 0, xx = 0,a ,b;
		int n = vecx.size();
		
		for(auto i = vecx.begin(); i < vecx.end(); i++){
			pair<float,float> aux = *i;
			x += aux.first;
			y += aux.second;
            xx += pow(aux.first,2);
			xy += aux.first * aux.second;
			
		}
		a = (xy - ((x * y) / n)) / (xx - (pow(x, 2) / n));
		b = (y / n) - (a * (x / n));
		
		return make_pair(a, b);
	}
};
int main(){
	vector<pair<float,float>> vecx = {{4,8},{5,4}, {8,9}, {3,7}, {6,5}, {2,8}};
	Regresion_Simple x;
	pair<float,float> _parvect = x(vecx);
		cout << "Puntos\n";
	for(auto i = vecx.begin(); i < vecx.end(); i++){
		pair<float,float> aux_ = *i;
		cout << "Par: (" << aux_.first << ", " << aux_.second << ")\n";
	}
	cout << endl;
	cout << "y = " << _parvect.first << "x + " << _parvect.second;
	
	return 0;
}
//Albert Vargas Mamani