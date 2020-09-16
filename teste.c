#include<stdio.h>
#include<windows.h>

main(){
	char Nome;
	int Ano, Resultado;
	
	printf("Digite seu nome:");
	scanf("%s",&Nome);
	printf("Digite o ano de seu Nascimento: \n");
	scanf("%d",&Ano);
	
	
	//calcular idade - ano puxando uma funcao da linguagem que usa relogio do window
    SYSTEMTIME str_t;
	GetSystemTime(&str_t);

    int DataAtual = str_t.wYear;
    Resultado = DataAtual - Ano;
    
	
	printf("Sua idade atual e %d anos " ,Resultado);
}
