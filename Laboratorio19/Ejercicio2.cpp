#include <iostream>
#include <vector>
using namespace std;
class Buscar{
public:
	Buscar();
	~Buscar();
	vector<int> operator()(const vector<int>& datos, int inicio, int final1, int num);
};
Buscar::Buscar(){
}
Buscar::~Buscar(){
}
vector<int> Buscar::operator()(const vector<int>& datos, int inicio, int fin, int num){
	vector<int> posiciones = {};

	for (int i = inicio; i < fin; i++){
		if (datos.at(i) == num)
			posiciones.push_back(i);
	}
	return posiciones;
}
int main(){
    cout<<"\n";
    cout<<"Vector"<<endl;
	vector<int> v1 = {5,2,5,3,9,2,4,3,7,8,2,3,2};
	vector<int> pos = {};

	Buscar b1;
	pos = b1(v1, 0, 13, 2);	
	   
	for (const auto& v2 : v1)
		cout<< v2 << " ";

	
    cout<<"\n";
	for (const auto& p : pos)
		cout << "Posicion donde se repite el 2: " << p << endl;

	return 0;
}
//Albert Vargas Mamani