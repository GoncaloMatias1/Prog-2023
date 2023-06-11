#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "show_file.h"
using namespace std;

bool average(const string& input_fname, const string& output_fname) {
    ifstream in(input_fname);    //ifstream é para ler o ficheiro //in é o nome do objeto criado, (input_fname) é o nome do ficheiro a ler
    if (in.fail())                     // para ver se ha algum erro ao abrir o documento. !=negaçao  input_file é o nome do objeto
        return false;

    ofstream out(output_fname);  //ostream é para escrever no ficheiro, out é o nome do objeto, e output_fname é o nome do dinheiro de saida
    if (out.fail())                    // para ver ha algum problema com o ficheiro
        return false;

    string line;                 // para armazenar cada linha do arquivo
    int line_counter = 0;

    while (getline(in, line)) {      //get line lê linha de in e guarda em line, q foi criada a string anteriormente
    // em cada loop é lida uma linha e armazenada na line
        double sum = 0.0;           // para armazenar a soma dos valores nas linhas
        double value;               // para armazenar cada valor individual extraido no loop
        int count = 0;              // para contar o numero de valores na linha                 

        istringstream iss(line);    // ler os valores no ficheiro line
        while (iss >> value) {      // passar os valores de iss, que foram lidos da file, para value
            sum += value;           // vamos adicionar os diferentes valores de uma linha à soma
            count++;                // e aumentar count para saber quantos numeros temos numa linha
        }

        if (count > 0) {
            double average = sum / count;   // fazer a média
            out << fixed << setprecision(3) << average << '\n';     //<< a average e o resto sao inseridos no out e mete uma nova linha em baixo
            line_counter++;         // aumenta o num de linha para sabermos o num de linhas lido
        }
    }

    out << "lines=" << line_counter << '\n'; // manda o num de linhas para o texto lines e depois para o ficheiro out

    return true;
}