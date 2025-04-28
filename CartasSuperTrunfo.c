#include <stdio.h>


int main(){
char estado[20]= "Bahia";
char codigo[10]= "B01";
char cidade[20]= "Salvador";
int população = 14850513;
double areakm² = 567.295;
double pib = 115.900000000;
int pontosturisticos = 160;


printf("Digite o nome do estado: \n");
scanf('%s', &estado);

printf("Digite o codigo: \n");
scanf('%s', &codigo);

printf("Digite o nome da cidade: \n");
scanf('%s', &cidade);


printf("Digite a população: \n");
scanf('%e', &população);

printf("Digite a area: \n");
scanf('%e', &areakm²);

printf("Digite o pib: \n");
scanf('&e', &pib);

printf("Digite o pontosturisticos: \n");
scanf('%d', &pontosturisticos);

printf("Nome do estado %s \n - codigo %s \n - cidade %s-", estado, codigo, cidade);
printf("população %d \n - areakm² %e \n - pib %e - pontosturisticos %d \n", população, areakm², pib,pontosturisticos);





return 0;
} 