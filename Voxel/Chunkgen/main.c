#include <stdio.h>
#include <stdlib.h>


#define CHUNK_X 8
#define CHUNK_Y 8
#define CHUNK_Z 8


int main(){

	FILE *f = fopen("chunk.txt", "w");
	
	int i;
	int j;
	int k;
	
	for ( i=0 ; i<CHUNK_X ; i++ ){
		for ( j=0 ; j<CHUNK_Z ; j++ ){
			for ( k=0 ; k<CHUNK_Y ; k++){
				srand(i*CHUNK_X*CHUNK_Y + j*CHUNK_Y + k);
				fprintf(f, "%i", rand() % 8);
			}
		}
	}
	
	fclose(f);
	
	return 0;
	
}
