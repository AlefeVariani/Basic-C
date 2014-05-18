#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <wait.h>
#include <string.h>

int main(){
	int numbytes, fd;
	char *frase;
	printf("filho sera criado\n");
	if(fork()==0){
		printf("\tUm arquivo sera criado, escrito e lido\n");
		fd = open("arquivotexto.txt", O_CREAT|O_WRONLY, S_IREAD|S_IWUSR);
		frase = "Este arquivo foi criado para exemplificar escrita e leitura de seu conteudo";
		numbytes = write(fd,frase,strlen(frase));
		printf("\t%d bytes foram gravados no arquivo.\n",numbytes);
		sleep(1);
		close(fd);
		return numbytes;
	} else {
		int status1;
		wait(&status1);
		char *resultado[WEXITSTATUS(status1)];
		fd = open("arquivotexto.txt", O_RDONLY, S_IREAD);
		printf("\tO arquivo sera aberto para leitura\n");
		numbytes = read(fd, resultado, WEXITSTATUS(status1));
		printf("\t%d bytes foram lidos no arquivo\n",numbytes);
		puts((char *)&resultado);
		close(fd);
		return 0;
	}
}

