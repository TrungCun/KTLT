#include<stdio.h>

//void printArray(int** map, int m, int n){
//	for(int i = 0; i < m; i++){
//		for(int j = 0; j < n; j++){
//			printf("map[%d][%d] = %d  ", i, j, map[i][j]);
//		}
//		printf("\n"); 
//	}
//}

int sum(int** map, int m, int n){
	int sumA = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(map[i][j] % 2 == 0){
				sumA += map[i][j];
			}
		}
	}
	return sumA;
}
void scanArray(int** map, int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("map[%d][%d] = ", i, j);
			scanf("%d", &map[i][j]);
		}
	}
}

void allocate(int ***map, int m, int n){
	*map = new int *[m];
	
	for(int i = 0; i < m; i++){
		(*map)[i] = new int[n];
	}
}
int main(){
	int m, n;
	int** map;
	
	
	scanf("%d%d", &m, &n);
	allocate(&map, m, n);
	scanArray(map, m, n);
//	printArray(map, m, n);
	printf("%d", sum(map, m, n));
	return 0;	
}
