// Ofuscador Básico de Texto || Versão 0.13 || Para console > Windows! || Desenvolvido por: III. \\
// Desenvolvido como projeto pessoal e como prova de conceito. || Língua original: PT-BR \\


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>


// Substituição \\

char* Modificar( char* s, char* Antigo, char* Novo){
    char* Resultado;
    int i, Chave = 0;
    int Novox = strlen(Novo);
    int Antigox = strlen(Antigo);
	
    for (i = 0; s[i] != '\0'; i++) {
		if (strstr(&s[i], Antigo) == &s[i]) {
			Chave++;
			i += Antigox - 1;
		}
    }
	
    Resultado = (char*)malloc(i + Chave * (Novox - Antigox) + 1);
    i = 0;
	
    while (*s) {
		if (strstr(s, Antigo) == s) {
			strcpy(&Resultado[i], Novo);
			i += Novox;
			s += Antigox;
		}else{
			Resultado[i++] = *s++;
		}
	}
	
    Resultado[i] = '\0';
	
    return Resultado;
}


int main(){

    system("chcp 65001 > NUL");
    setlocale(LC_ALL,NULL);
    printf("\x1b[30m" "\u200C" "\x1b[0m");

	int Choice = -2147483647;
	char V_Corrente[] = "V0.13";
    char Texto[20000];
    char Pesquisar[] = "NaN";
    char Substituir[] = "NaN";
    char* Resultado = NULL;


    printf("\n\t\u25C4 " "\x1b[35m" "Anti - Detector de Plágio" "\x1b[0m" " \u25BA\n\n Para utilizar esse script, digite um texto abaixo\n que irá modificar algumas de suas letras para outro alfabeto,\n camuflando o texto de ser detectado diretamente pelas máquinas.\n Lembre-se de evitar utilizar textos com\n caracteres especiais como o \u201CLinefeed\u201D.\n\n" "\x1b[31m" " Desenvolvido apenas como prova de conceito!\n\n\n" "\x1b[0m" "\x1b[33m" " \u25BA " "\x1b[0m");
    fgets(Texto, sizeof(Texto), stdin);
	
    printf("\n\n\n\n\t\u2193 " "\x1b[32m" "Texto Original " "\x1b[0m" "\u2193\n\n " "\x1b[32m" "\u2022 " "\x1b[0m" "%s\n\n\n\n",Texto);


    // Codificação Unicode \\

    strcpy(Pesquisar, "A");
    strcpy(Substituir, "\u0410");
    Resultado = Modificar(Texto, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "E");
    strcpy(Substituir, "\u0415");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "I");
    strcpy(Substituir, "\u0406");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "O");
    strcpy(Substituir, "\u041E");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "U");
    strcpy(Substituir, "\u054D");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "a");
    strcpy(Substituir, "\u0430");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "e");
    strcpy(Substituir, "\u0435");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "i");
    strcpy(Substituir, "\u0456");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "o");
    strcpy(Substituir, "\u043E");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);
	
    strcpy(Pesquisar, "u");
    strcpy(Substituir, "\u057D");
    Resultado = Modificar(Resultado, Pesquisar, Substituir);


    // Resultado final \\

    printf("\t\u2193 " "\x1b[35m" "Texto Modificado " "\x1b[0m" "\u2193\n\n " "\x1b[35m" "\u2022 " "\x1b[0m" "%s\n\n\n\n", Resultado);


    // Finalização. \\

    printf("\x1b[0m" " -" "\x1b[31m" " Digite '0' para encerrar o programa.\n" "\x1b[0m" " -" "\x1b[33m" " Digite '1' para acessar o changelog.\n" "\x1b[0m" "\n \u25BA ");
	scanf("%d",&Choice);

	if (Choice < 1 || Choice > 1){

		printf("\n\n\x1b[0m" " \u25BA" "\x1b[32m" " O programa foi encerrado com sucesso!\n" "\x1b[0m");
		
		return 0;

	}else{

		printf("\n\n\x1b[0m" " \u250F" "\x1b[0m" " Changelog do programa:\n" "\x1b[0m" " \u2523" "\x1b[33m" " 12/05/2022 " "\x1b[32m" "(BETA)" "\x1b[0m" " - Criação.\n" "\x1b[0m" " \u2523" "\x1b[33m" " 01/09/2022 " "\x1b[32m" "(V0.1)" "\x1b[0m" " - Bugs consertados + Coloração da interface.\n" "\x1b[0m" " \u2523" "\x1b[33m" " 04/09/2022 " "\x1b[32m" "(V0.13)" "\x1b[0m" " - Changelog público.\n"		 "\x1b[0m" " \u2517\u254D" "\x1b[32m" " Versão Atual" "\x1b[0m" " = %s",V_Corrente);
		printf("\n\n\n\x1b[0m" " -" "\x1b[35m" " Digite algo para encerrar o programa.\n" "\x1b[0m" "\n \u25BA ");
		scanf("%d",&Choice);
		
		printf("\n\n\x1b[0m" " \u25BA" "\x1b[32m" " O programa foi encerrado com sucesso!\n" "\x1b[0m");
		
		return 0;

	}
}
