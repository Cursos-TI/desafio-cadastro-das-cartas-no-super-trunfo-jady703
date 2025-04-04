#include <stdio.h>


int main(){
char Estado[20] = 'Bahia';
char Codigo[10]= 'B01';
char Cidade[20]= 'Salvador';
int População = 14850513;
float Áreakm² = 567.295;
float PIB = 115.900000000;
int PontosTuristicos = 160;


printf("Digite o nome do Estado: \n");
scanf('%s', &Estado);

printf("Digite o Codigo;=: \n");
scanf('%s', &Codigo);

printf("Digite o nome da Cidade: \n");
scanf('%s', &Cidade);


printf("Digite a População: \n");
scanf('%d', &População);

printf("Digite a Área: \n");
scanf('%f', &Áreakm²);

printf("Digite o PIB: \n");
scanf('&f', &PIB);

printf("Digite o PontosTuristicos: \n");
scanf('%d', &PontosTuristicos);

printf("Nome do Estado %s \n - Codigo %s \n - Cidade %s-", Estado, Codigo, Cidade);
printf("População %d \n - Áreakm² %f \n - PIB %f - PontosTuristicos %d \n", População, Áreakm², PIB,PontosTuristicos);



return 0;
}