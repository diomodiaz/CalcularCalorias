#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	float act,tiemp,cd,cs;
	
	cout<<"Introduzca 1 si esta sentado o 2 si esta dormido"<<endl;
	cin >>act;
	cout<<"Introduzca el tiempo a realizar la actividad"<<endl;
	cin >>tiemp;
	
	if (act=2){
		cd=(float) 1.08 * (float)tiemp;
		cout<<"Calorias consumidas mientras duerme: "<<cd<<endl;
		
	 if (act=1){
	
			cs=(float) 1.66 * (float)tiemp;
		cout<<"Calorias consumidas mientras esta sentado: "<<cs<<endl;
 }else{
 	
 }
	} else{
		
	}
	return 0;
}
