#include <iostream>
using namespace std;

#include <time.h>

#include "transformacoes.hpp"

int main(void)
{
	setlocale(LC_ALL, "Portuguese");

	int opcao = 0;
	
	PPM ppm_1, ppm_2, ppm_3;
	ler(&ppm_1, "imagens/numeros.ppm");
	ler(&ppm_2, "imagens/numeros2.ppm");
	criar(&ppm_3, ppm_1.largura, ppm_1.altura);

	cout<< "* COMBINAR IMAGENS * ";

	do {

		cout<< "\n  1 - Media ";
		cout<< "\n  2 - Maior ";
		cout<< "\n  3 - Menor ";
		cout<< "\n  4 - Mesclado ";
		cout<< "\n  5 - InvertidoRB ";
		cout<< "\n  6 - InvertidoRG ";
		cout<< "\n  0 - Sair ";

		cout<< "\n\nInsira a opção desejada: ";
		cin>> opcao;

		switch (opcao) {

			case 1:
				combinarMedia(&ppm_1, &ppm_2, &ppm_3);
				cout<< "\n\nOperação realizada: Media";
				gravar(&ppm_3, "imagens/numeros-" + to_string(time(NULL)) + ".ppm");
				break;
			case 2:
				combinarMaior(&ppm_1, &ppm_2, &ppm_3);
				cout<< "\n\nOperação realizada: Maior";
				gravar(&ppm_3, "imagens/numeros-" + to_string(time(NULL)) + ".ppm");
				break;
			case 3:
				combinarMenor(&ppm_1, &ppm_2, &ppm_3);
				cout<< "\n\nOperação realizada: Menor";
				gravar(&ppm_3, "imagens/numeros-" + to_string(time(NULL)) + ".ppm");
				break;
			case 4:
				combinarMesclado(&ppm_1, &ppm_2, &ppm_3);
				cout<< "\n\nOperação realizada: Mesclado";
				gravar(&ppm_3, "imagens/numeros-" + to_string(time(NULL)) + ".ppm");
				break;
			case 5:
				combinarInvertidoRB(&ppm_1, &ppm_2, &ppm_3);
				cout<< "\n\nOperação realizada: InvertidoRB";
				gravar(&ppm_3, "imagens/numeros-" + to_string(time(NULL)) + ".ppm");
				break;
			case 6:
				combinarInvertidoRG(&ppm_1, &ppm_2, &ppm_3);
				cout<< "\n\nOperação realizada: InvertidoRG";
				gravar(&ppm_3, "imagens/numeros-" + to_string(time(NULL)) + ".ppm");
				break;
			case 0:
				cout<< "\nSaindo do programa...";
				break;
			default:
				cout<< "\nOpcao invalida!";

			cout<< "\n\n";

		}

	} while (opcao != 0);
	
	return EXIT_SUCCESS; 
}