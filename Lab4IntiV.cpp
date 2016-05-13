#include<cstring>
#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

void factorizar(int*,int);

int main(int argc, char* argv[]){
	
	int resp=1;
	while(resp){
		int op;
		cout<<"1.-Factorizar\n2.-Conjugar\n3.-salir"<<endl;
		cin>>op;
		if(op==1){
			const int size=3;
			int* funcion=new int[size];
			cout<<"Ingrese a:"<<endl;
			cin>>funcion[0];
			cout<<"Ingrese b:"<<endl;
			cin>>funcion[1];
			cout<<"Ingrese c:"<<endl;
			cin>>funcion[2];
			factorizar(funcion,size);
			delete[] funcion;
		}else if(op==2){
			

		}else if(op==3){
			cout<<"Gracias por usar este programa! =D"<<endl;
			return 0;
		}
		cout<<"Desea continuar? [1=Si, 0=No] "<<endl;
		cin>>resp;
	}
	return 0;
}

void factorizar(int* func,int size){
	int x2, x1;
	x2=((-1*func[1])+sqrt(pow(func[1],2)-4*((func[1]*func[2])))/(2*func[0]));
	x2*=-1;
	
	x1=((-1*func[1])-sqrt(pow(func[1],2)-4*((func[1]*func[2])))/(2*func[0]));
	x1*=-1;
	cout<<func[0]<<"x^2 + ("<<func[1]<<") + ("<<func[2]<<") = (x + ("<<x2<<"))(x + ("<<x1<<"))"<<endl;

}
