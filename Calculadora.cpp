#include <iostream>
using namespace std;

int suma(int x,int y){
	std::cout << x + y;
	return x+y;
}
	
int resta(int a, int b){
	return a-b;
}

int multiplicacion(int a, int b) {
	return a * b;
}

double division(int a, int c) {
	if (c != 0) {
		return a / c;

	}
	return 0;
}

int main(int argc, char *argv[]) {
	
	int a,b, opc;
	
	cout<<"Ingrese 2 valores para hacer una operacion"<<endl;
	cin>>a>>b;
	cout<<"Cual operacion desea hacer: "<<endl;
	cout<<"1. Suma"<<endl;
	cout<<"2. resta"<<endl;
	cout<<"3. multiplicacion"<<endl;
	cout<<"4. division"<<endl;
	cout<<endl;
	cin>>opc;
	
	if(opc == 1){
		cout<<suma(a,b);
	}else if(opc == 2){
		cout<<resta(a,b);
	}else if(opc == 3){
		cout<<multiplicacion(a,b);
	}else if(opc == 4){
		cout<<division(a,b);
	}
	
	
	return 0;
}

