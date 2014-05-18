#include <stdio.h>
#include <stdlib.h>

void transforma_hora (int segundos){
	int hora, min,sec;
	
	hora = segundos/3600;
	
	min= (segundos - hora*3600)/60;
	
	sec=segundos-hora*3600-min*60;
	
	printf("%d horas %d minutos e %d segundos\n",hora, min, sec);
	
}

int main (){
	int segundos;
	
	printf("Informe o numero de segundos: \n");
	scanf("%d", &segundos);
	
	transforma_hora(segundos);
	
	return 0;
}
