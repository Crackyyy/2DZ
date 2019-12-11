#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
        FILE *file;
    file= fopen("grafic.dot", "w");
    if (file == NULL){
        printf("Error");
        exit(0);
    }
    fprintf (file,"graph test{\n");
	
	
   
    int N,a,i,j;
    printf("Vvedite col-vo vershin grafa: ");
    scanf ("%d", &N);
	for (i=0;i<N;i++) {
		fputc(i+'0',file);
		fputc(';',file);
	}
		fputc('\n',file);
    int A[N][N];
    for (i=0; i<N;i++){
            for (j=0;j<i;j++){
				printf("%d -- %d?",i,j);
                scanf ("%d",&A[N][N]);
                getchar();
                if (A[N][N] > 0){
                    fprintf(file,"%d--%d\n",i,j);
                }
                if (A[N][N]<0){
                    fprintf(file,"%d--%d\n",j,i);
                }
            }
            puts("\n");
    }
    fprintf(file,"}");
    fclose(file);
	
    system("PAUSE");
    return 0;
}