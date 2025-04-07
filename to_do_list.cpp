#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> tarefas; //vetor para armazenar as tarefas
    string opc;
    string tarefa;

do {
    cout << "Digite uma opc : ";
    cin >> opc;
    cin.ignore (); //define a var opc para uma opção

if (opc == "Adicionar") {
     system("cls");
    cout << "Escreva a tarefa que deseja : ";
    getline(cin, tarefa);
    tarefas.push_back(tarefa);
    cout << "Tarefa adicionada!\n"; //define a var tarefa como o imput e salva no vetor
}

if (opc == "Lista") {
    system("cls");
    cout << "Tarefas na lista.\n";
        if (tarefas.empty ()) {
            cout << "Nenhuma tarefa";
        }
        else {
             for (size_t i = 0; i < tarefas.size(); i++) {
                        cout << i + 1 << ". " << tarefas[i] << endl; //lista as tarefas da lista
        }

        }

}

}
    while (opc != "Sair");
return 0;
}
