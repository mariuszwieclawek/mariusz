#include <stdio.h>

int main(int argc,char* argv[]){
	if(argc<2){
		printf("Poprawne uzycie test2 liczba1 liczba2 ..\n");
		return 1;
	}
	int suma=0;
	for(int i=1; i<argc; i++){
		suma+= atoi(argv[i]);
	}
	printf("Suma podanych wyrazow=%d\n",suma);
	return 0;
}
