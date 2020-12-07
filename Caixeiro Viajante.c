#include <stdio.h>
#include <stdlib.h>

int cidades[30][30], cidVisitada[30], cid = 30, custo = 0;
 
int MatrizCidades(int c)
{
 int ct, cid_aprox = 10000;
 int menor = 10000, tp;
 for(ct = 0; ct < cid; ct++)
 {
 if((cidades[c][ct] != 0) && (cidVisitada[ct] == 0))
 {
 if(cidades[c][ct] < menor)
 {
 menor = cidades[ct][0] + cidades[c][ct];
 }
 tp = cidades[c][ct];
 aprox_cid = ct;
 }
 }
 if(menor != 10000)
 {
 custo = custo + tp;
 }
 return cid_aprox;
}

CustoMenor(int cid)
{
 int cid_aprox;
 cidVisitada[cid] = 1;
 printf("%d ", cid + 1);
 cid_aprox = MatrizCidades(cid);
 if(cid_aprox == 10000)
 {
 cid_aprox = 0;
 printf("%d", cid_aprox + 1);
 custo = custo + cidades[city][cid_aprox];
 return;
 }
 CustoMenor(cid_aprox);
}


