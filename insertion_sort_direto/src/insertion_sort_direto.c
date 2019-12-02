#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "insertion_sort_direto.h"

void insertion_sort_direto(dado_t ** dados, int n_linhas){
	for(int i = 1; i < n_linhas; i++){
		for(int j = i; j > 0 && retornar_temperatura(dados[j - 1]) > retornar_temperatura(dados[j]); j--){
			dado_t * aux = dados[j];
			dados[j] = dados[j - 1];
			dados[j - 1] = aux;
		}
	}
}
