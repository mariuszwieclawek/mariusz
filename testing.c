#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char const *miesiace(int nr){
    static char const *nazwa[]={
    "bledny miesiac","styczen","luty","marzec","kwiecien","maj",
    "czerwiec","lipiec","sierpien","wrzesien","pazdziernik",
    "listopad","grudzien"
    };
    if(nr<1 || nr>12){
        return nazwa[0];
    }
    else
        return nazwa[nr];
}

int main(int argc, char** argv){
    for(int i=1; i<argc; i++){
        printf("%s",miesiace(argv[i]));
    }
    return 0;
}

