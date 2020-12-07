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
            cid_aprox = ct;
            }
    }
    
    if(menor != 10000)
    {
        custo = custo + tp;
    }
 
    return cid_aprox;
}

void CustoMenor(int cid)
{
    int cid_aprox;
    cidVisitada[cid] = 1;
    printf("%d ", cid + 1);
    cid_aprox = MatrizCidades(cid);
    if(cid_aprox == 10000)
    {
        cid_aprox = 0;
        printf("%d", cid_aprox + 1);
        custo = custo + cidades[cid][cid_aprox];
    }
}

int main()
{ 
    int i, j;
     

     
    printf("\nPercorrendo as Cidades\n");
    for(i = 0; i < cid; i++)
    {
        printf("\nDigite %d Distancias no percurso[%d]\n", cid, i + 1);
        for(j = 0; j < cid; j++)
        {
            scanf("%d", &cidades[i][j]);
        }
        cidVisitada[i] = 0;
    }
    
    printf("\nResultado do Percurso\n");
    
    for(i = 0; i < cid; i++)
    {
        printf("\n");
        for(j = 0; j < cid; j++)
        {
            printf("%d ", cidades[i][j]);
        }
    }
    
    printf("\n\nPercurso:\t");
    
    CustoMenor(0);
    
    printf("\n\n: \t");
    printf("%d Custo em KM\n", custo);
    
    return 0;
}
