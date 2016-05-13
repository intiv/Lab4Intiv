#include<cstring>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main(int argc, char* argv[]){
	
	int resp=1;
	while(resp){
		int op;
		cout<<"1.-Factorizar\n2.-Conjugar\n3.-salir"<<endl;
		cin>>op;
		if(op==1){
			int funcion[3];
			cout<<"Ingrese a:"<<endl;
			cin>>funcion[0];
			cout<<"Ingrese b:"<<endl;
			cin>>funcion[1];
			cout<<"Ingrese c:"<<endl;
			cin>>funcion[2];
			
		}else if(op==2){


		}else if(op==3){
			cout<<"Gracias por usar este programa! =D"<<endl;
			return 0;
		}
		
	}
	return 0;
}
