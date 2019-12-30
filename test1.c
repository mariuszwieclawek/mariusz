#include <stdio.h>

const char* miesiace(int nr){
	static const char *name[]={"bledny miesiac","styczen","luty",
	"marzec","kwiecien","maj","czerwiec","lipiec","sierpien","wrzesien",
	"pazdziernik","listopad","grudzien"
	};
	if(nr<1 || nr>12){
		return name[0];
	}
	else
		return name[nr];
}

int main(int argc, char* argv[]){
	if(argc<=1)
	printf("Prawidlowe uzycie test1 numer_miesiaca\n");
	for(int i=1; i<argc; i++){
		printf("%s\n",miesiace(atoi(argv[i])));
	}
	return 0;
}
