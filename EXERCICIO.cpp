#include <iostream>
#include <string>
using namespace std;

struct carro {
	string modelo;
	int ano;
	char placa[7];

};

int main(int argc, char** argv) {
	int tamanho;
	int opcao;
	string placaBusca;

	do {
	    cout << "\nMenu de opcoes:\n";
	    cout << "1. Inserir Carros\n";
	    cout << "2. Mostrar Todos os Carros\n";
	    cout << "3. Buscar um Carro e Mostrar\n";
	    cout << "0. Sair\n";
	    cout << "Escolha uma opcao: ";
		
	
		
				
		struct carro carros[tamanho];	
		
		cin >> opcao;
	
		switch (opcao) {
		    case 1:		
				cout << "Quantidade de carros a inserir: ";	
				cin >> tamanho;	
				for(int i=0; i<tamanho; i++) {
					cout << "\n Modelo: ";
					cin >> carros[i].modelo;
					
					
					cout << "\n Ano: ";
					cin >> carros[i].ano;
					
					cout << "\n Placa: ";
					cin >> carros[i].placa;
				}
				
			    break;
		    
		    case 2:
			    cout << "\n Lista de carros registrados: \n";
				
				for(int i=0; i<tamanho; i++) {
					cout << "\n Modelo: " << carros[i].modelo;
					cout << "\n Ano: " << carros[i].ano;
					cout << "\n Placa: " << carros[i].placa;
				}
			    break;
		    
		    case 3:
			    cout << "Digite a placa do carro a ser buscado: ";
			    cin >> placaBusca;
			
			    for (int i = 0; i < tamanho; i++) {
			        if (carros[i].placa == placaBusca) {
			            cout << "\nModelo: " << carros[i].modelo;
			            cout << "\nAno: " << carros[i].ano;
			            cout << "\nPlaca: " << carros[i].placa << endl;
			            break;
			        }
			    }		    
			    break;
		    
	        case 0:
	        	cout << "Saindo do programa...\n";
	        	break;
	        		         
		}
		cout << endl;
	}
	while (opcao!=0);
	cout << endl;

	return 0;
}