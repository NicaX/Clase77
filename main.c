#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}eDato;

eDato* funcion(int x, char y);
int main()
{
    /*eDato miDato ={42,'P'};
    eDato* pDato;
    int x;

    pDato=&miDato; //si es una estructura se usa el &
    x= (*pDato).a;
    printf("%d",x);

    --------------------------------------------------------------------


    eDato miDato[2]={ {21,'c'} , {33,'d'} };
    eDato* pDato;
    int i;


    pDato=miDato; //en este caso no hace falta el &
    for(i=0;i<2;i++)
    {
        printf("%d--",(*(pDato+i)).a);
        printf("%c--\n",(*(pDato+i)).b);
    }
    --------------------------------------------------------------------

    eDato miDato ={42,'P'};
    eDato* pDato;
    int x;

    pDato=&miDato; //si es una estructura se usa el &
    x= pDato -> a;
    printf("%d",x);

    --------------------------------------------------------------------

    eDato miDato[2]={ {21,'c'} , {33,'d'} };
    eDato* pDato;
    int i;


    pDato=miDato; //en este caso no hace falta el &
    for(i=0;i<2;i++)
    {
        printf("%d--",(pDato+i)->a);
        printf("%c--\n",(pDato+i)->b);
    }

    --------------------------------------------------------------------


    eDato* pDato;

    pDato=funcion(45, 'L');
    printf("%d -- %c", pDato->a, pDato->b);

    --------------------------------------------------------------------

    eDato* pDatoA;
    eDato* pDatoB;



    pDatoA=funcion(45, 'L');
    printf("%d -- %c\n", pDatoA->a, pDatoA->b);

    pDatoB=funcion(6, 'N');
    printf("%d -- %c", pDatoB->a, pDatoB->b);
    --------------------------------------------------------------------


    int* pEntero;
    pEntero= malloc(sizeof(int));
    *pEntero=9;
    printf("%d", *pEntero);

    --------------------------------------------------------------------

    int i;
    int* pEntero;

    pEntero=(int*)malloc(sizeof(int)*5);
    if(pEntero!=NULL)
    {
        for(i=0;i<5;i++)
        {
            printf("cargar: ");
            scanf("%d \n",pEntero+i);

        }
        for(i=0;i<5;i++)
        {
            printf("%d",*(pEntero+i));
        }
    }

    --------------------------------------------------------------------
    --------------------------------------------------------------------
    --------------------------------------------------------------------
    */

    int i;
    int* pEntero;

    pEntero=(int*)malloc(sizeof(int)*5);
    if(pEntero!=NULL)
    {
        for(i=0;i<5;i++)
        {
            printf("cargar: ");
            scanf("%d--\n",pEntero+i);

        }
        for(i=0;i<5;i++)
        {
            printf("%d \n",*(pEntero+i));
        }
    }

    pEntero=realloc(pEntero, sizeof(int)*10);

    //la funcion ue devolvia un puntero, pero con malloc
    return 1;


}
eDato* funcion(int x, char y)
{
    eDato* pDato;
    eDato datito;
    pDato =&datito;
    pDato->a=x;
    pDato->b=y;

    return pDato;

}
