#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* uniao(int *v1,int n1,int *v2,int n2){
    int n3 =n1+n2;
    int *v3=(int*)calloc(n3,sizeof(int));
    int i;
    int c=1;
    for (i = 0; i < n3; i++)
    {
        if (i<=n1){
            v3[i]=v1[i];
        }
        if(i>n1){
            v3[i]=v2[c];
            c+=1;
        };
    }
    return v3;
};
int main(void){
    int v1[4]={11, 13, 45, 7};
    int n1 = sizeof(v1)/sizeof(int);
    int v2[6]={24, 4, 16, 81, 10, 12};
    int n2 = sizeof(v2)/sizeof(int);
    int *v3 = uniao(v1,n1,v2,n2);

    int i;
    printf("{");
    for (i = 0; i < (n1+n2); i++)
    {
        printf("%d, ",v3[i]);
    }
    printf("}\n");
    free(v3)
    return 0;
};

