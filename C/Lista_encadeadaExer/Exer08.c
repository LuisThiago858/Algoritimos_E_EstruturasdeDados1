/*
Considere uma matriz A com 4 linha e 4 colunas. Lidas as
 coordenadas de duas casas calcule a Distância Manhhattan entre os casas.

Distância Manhattan: |x1 – x2| + |y1 – y2|.

0
0
3
3

0 0
3 3 
5
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int coord1_i, coord1_j, coord2_i, coord2_j;
    scanf("%d", &coord1_i);
	scanf("%d", &coord1_j);
    scanf("%d", &coord2_i);
	scanf("%d", &coord2_j);

    int dist = abs(coord1_i - coord2_i) + abs(coord1_j - coord2_j);
    printf("%d %d\n%d %d: %d\n", coord1_i, coord1_j, coord2_i, coord2_j, dist);

    return 0;
}