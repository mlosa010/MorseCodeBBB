#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "morseAlph.h"
extern char A[2];
extern char B[4];
extern char C[4];
extern char D[3];
extern char E[1];
extern char F[4];
extern char G[3];
extern char H[4];
extern char I[2];
extern char J[4];
extern char K[3];
extern char L[4];
extern char M[2];
extern char N[2];
extern char O[3];
extern char P[4];
extern char Q[4];
extern char R[3];
extern char S[3];
extern char T[1];
extern char U[3];
extern char V[4];
extern char W[3];
extern char X[4];
extern char Y[4];
extern char Z[4];
char* alpha_numeric [26] ={A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
int asci_to_dec;

int main(int argc,char* argv[]){
   for (int k = 1; k<argc; k++){
   printf("%s size = %d\n",argv[k] ,strlen(argv[k]));
   for (int i=0; i<strlen(argv[k]); i ++){
     asci_to_dec = ((unsigned char)argv[k][i])-65;
//printf("%d",asci_to_dec);
     for (int j =0; j<sizeof(alpha_numeric[asci_to_dec]); j++){
       printf("%c",alpha_numeric[asci_to_dec][j]);
//printf("%d",sizeof(alpha_numeric[asci_to_dec][j]));
}
     printf("\t");
}
     printf("\n");
}
}


