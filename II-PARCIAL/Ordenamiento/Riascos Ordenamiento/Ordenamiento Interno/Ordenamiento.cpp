#include "Ordenamiento.h"
void Ordenamiento::intercambio(){
	std::cout << "\nOrdenamiento por Intercambio: ";
	Nodo<int>* tmp = lst.getTop();
	int aux=0;
	while (tmp) {
		Nodo<int>* tmp1 = tmp->getSiguiente();
		while (tmp1) {			
			if (tmp->getValor() > tmp1->getValor()) {		
				aux = tmp->getValor();
				tmp->setValor(tmp1->getValor());
				tmp1->setValor(aux);
			}
			tmp1 = tmp1->getSiguiente();
		}
		tmp = tmp->getSiguiente();
		
	}
	lst.mostrar();
}

void Ordenamiento::shellSort()
{
	std::cout << "\nOrdenamiento por ShellSort: ";
	int aux = lst.getTamanio()-1, i = aux + 1, j = 0, x = 0, y = 0;
	bool a = true;
	while (i>1) {
		a = true;
		i = int(i / 2);
		while (a) {
			a = false;
			j = 0;
			while ((j + i) <= aux) {
				x = lst.getPos(j)->getValor();
				y = lst.getPos(j + i)->getValor();
				if (x > y) {
					int aux = lst.getPos(j)->getValor();
					lst.setPos(lst.getPos(j + i)->getValor(), j);
					lst.setPos(aux, j + i);
					a = true;
				}
				j++;
			}
		}		
	}
	lst.mostrar();
}

void Ordenamiento::radixSort()
{
	
}

int getUltimoDigito(int a) {
	return a - int(a / 10) * 10;
}
Ordenamiento::Ordenamiento(Lista<int> _lst)
{
	this->lst = _lst;
}


