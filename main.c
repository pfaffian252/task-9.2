#include <stdio.h>
#include <stdlib.h>
const  int n=8;
const int m=6;
int main()
{
    int i, j, a[m][n], l, k, p;
    printf("select the option of filling the matrix (1 or 0)\n");
    scanf("%d", &l);
    if (l)
    {
    for (i=0; i<m; i++)
        for (j=0; j<n; j++) a[i][j]=(abs(j-i)+1);
        for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++) printf("%4d", a[i][j]);
        printf("\n");
    }
    }
    else
    {
        k=1;
        i=0;
        for (p=0; p<=n/2 && p<=m/2 ; p++ )
    {
    for (j=p; j<n-p && k<=n*m; j++)
    {
        a[i][j]=k;
        k++;
    }
    j--;
     for (i=1+p; i<m-p && k<=n*m; i++)
    {
        a[i][j]=k;
        k++;
    }
    if ((1+p)<(m-p)) i--;
    for (j=n-2-p; j>=p && k<=n*m; j--)
    {
        a[i][j]=k;
        k++;
    }
    j++;
    for (i=m-2-p; i>=1+p && k<=n*m; i--)
    {
        a[i][j]=k;
        k++;
    }
    if((m-2-p)>=(1+p)) i++;
    }

     for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++) printf("%4d", a[i][j]);
        printf("\n");
    }
    }
    return 0;
}
