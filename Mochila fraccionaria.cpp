#include<stdio.h>

typedef struct {
	float peso;
	float valor;
}mochila;

int main(){
float valorObj[5];
float pesoObj[5];
mochila m1;
float razon[5],bestRaz;
int n;


for(int i=0; i<5;i++){
	printf("\nIntroduzca el peso del objeto %d:\t",i+1);
	scanf("%f",&pesoObj[i]);
	
	printf("\nIntroduzca el valor del objeto %d:\t",i+1);
	scanf("%f",&valorObj[i]);	
}

for(int i=0; i<5;i++){
	razon[i]= valorObj[i]/pesoObj[i];
}
bestRaz=razon[0];
for(int i=0; i<5;i++){
	if(razon[i]>bestRaz){bestRaz= razon[i]; n=i;
	}
}
printf("\n\nIntroduzca el peso total de la mochila\t");
scanf("%f",&m1.peso);

m1.valor= valorObj[n]*(m1.peso/pesoObj[n]);

printf("\n la mochila valdria $%.2f \t con el objeto %d",m1.valor, n+1);

return 0;}
