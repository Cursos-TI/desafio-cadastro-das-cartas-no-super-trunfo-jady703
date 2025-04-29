#include <stdio.h>

int main() {
char estado[20]="Bahia";
char cidade[20]="Salvador";
float população=14850513;
float areakm² =567.295;
double pib =115.900000000;
int pontosturisticos= 160;

printf("Digite o nome do estado: \n");
scanf("%s", &estado);

printf("Digite o nome da cidade:\n");
scanf("%s", &cidade);

printf("Digite o numero da população;\n");
scanf("%f", &população);

printf("Digite a areakm²:\n");
scanf("%e", &areakm²);

printf("Digite o numero de pib:\n");
scanf("%e", &pib);

printf("Digite o numero de pontosturistico:\n");
scanf("%d", &pontosturisticos);

printf("Nome do estado: %s \nNome da cidade: %s\n", estado, cidade);
printf("Numero da população: %f \nareakm² %e \nNumero de pib %e \nNumero de pontosturistocos %d", população, areakm², pib, pontosturisticos);

return 0;
}