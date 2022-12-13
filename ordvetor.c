#include "ordvetor.h"

VETORORD *VETORD_create(int n, COMP *compara) { 
  VETORORD *estrutura = malloc(sizeof(VETORORD));

  estrutura-> N = n; // tamanho do vetor
  estrutura-> P = 0; // numero de elementos no vetor
  estrutura-> elems = malloc(n * sizeof(void *));
  estrutura-> comparador = compara;

  // zerando os valores dentro de elems
  for (int i = 0; i < n; i++) {
    estrutura-> elems[i] = NULL;
  }

  return estrutura;
}

void VETORD_add(VETORORD *vetor, void *newelem) {
  if (vetor-> P < vetor-> N) { // verifica se a vetor esta cheia
    int lastElem = vetor-> P - 1; // valor do ultimo elemento add na vetor

    if (vetor-> P == 0) { // caso a vetor esteja vazia
      vetor-> elems[0] = newelem; // adiciona o primeiro elem
    } else {
      int comp = vetor-> comparador(newelem, vetor-> elems[lastElem]);

      if (comp == -1 || comp == 0) { // se novo elemento >= elemento anterior
        vetor-> elems[vetor-> P] = newelem;
      } else {
        for (int i = lastElem; i >= 0; i--) {
          comp = vetor-> comparador(newelem, vetor-> elems[i]);

          if (comp == 1) { // se novo elemento < elemento anterior
            vetor-> elems[i+1] = vetor-> elems[i]; // move os elems na vetor para posicionar o newelem
            vetor-> elems[i] = newelem;
          } else {
            break;
          }
        }
      }
    }

    vetor-> P += 1; // atualiza o tamanho da vetor
  }
}

void *VETORD_remove(VETORORD *vetor) {
  void *remove = vetor-> elems[0];

  for (int i = 0; i < vetor-> P; i++) {
    vetor-> elems[i] = vetor-> elems[i+1]; // move os elems na vetor
  }

  vetor-> elems[vetor-> P - 1] = NULL; // zera o ultimo elemento da vetor
  vetor-> P -= 1; // atualiza o tamanho da vetor

  return remove;
}
