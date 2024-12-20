#include <iostream>
#include "grafo.cpp"

int main() {
    // Creazione del grafo
    Grafo<std::string> grafo;

    // nodi
    grafo.aggiungiNodo("Ruggi");
    grafo.aggiungiNodo("Scaffo");
    grafo.aggiungiNodo("Sole");
    grafo.aggiungiNodo("Verna");
    grafo.aggiungiNodo("Pacco");

    //  archi
    grafo.aggiungiArco("Ruggi", "Scaffo", 5);
    grafo.aggiungiArco("Ruggi", "Sole", 3);
    grafo.aggiungiArco("Ruggi", "Verna", 4);
    grafo.aggiungiArco("Scaffo", "Pacco", 2);
    grafo.aggiungiArco("Verna", "Pacco", 1);
    grafo.aggiungiArco("Pacco", "Scaffo", 2);

    // Visualizzazione 
    grafo.stampa();

    // esistenza di un nodo
    std::cout << "Esiste il nodo 'Ruggi'? " << (grafo.verificaArco("Ruggi", "Scaffo") ? "Sì" : "No") << std::endl;

    // Nodi adiacenti a 'Ruggi'
    grafo.nodiAdiacenti("Ruggi");

    // Verifica eseistenza di un arco 
    std::cout << "Esiste arco tra 'Ruggi' e 'Scaffo'? " << (grafo.verificaArco("Ruggi", "Scaffo") ? "Sì" : "No") << std::endl;

    // Trova arco minimo da un nodo
    grafo.arcoMin("Ruggi");

    // Rimozione nodo e arco
    grafo.rimuoviArco("Ruggi", "Scaffo");
    grafo.nodiAdiacenti("Ruggi");

    return 0;
}



