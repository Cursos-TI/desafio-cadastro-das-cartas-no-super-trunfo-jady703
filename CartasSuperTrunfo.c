#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main(){
char Estado[20] = 'Bahia';
char Codigo[10]= 'B01';
char Cidade[20]= 'Salvador';
int População = 14850513;
float Áreakm² = 567.295;
float PIB = 115.900000000;
int PontosTuristicos = 160;


printf("Digite o Estado: \n");
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
return 0;
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o códi
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
}
