#include <iostream>

using namespace std;

struct carro {
	string modelo;
	int ano;
	char placa[7];

};

int main(int argc, char** argv) {
	int tamanho;
	
	cout << "Quantidade de carros a inserir: ";
	cin >> tamanho;
	
	struct carro carros[tamanho];
	
	for(int i=0; i<tamanho; i++) {
		cout << "\n Modelo: ";
		cin >> carros[i].modelo;
		
		
		cout << "\n Ano: ";
		cin >> carros[i].ano;
		
		cout << "\n Placa: ";
		cin >> carros[i].placa;
	}
	
	cout << "\n Lista de carros registrados: \n";
	
	for(int i=0; i<tamanho; i++) {
		cout << "\n Modelo: " << carros[i].modelo;
		cout << "\n Ano: " << carros[i].ano;
		cout << "\n Placa: " << carros[i].placa;
	}
	
	cout << endl;

	return 0;
}