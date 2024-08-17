#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_rows;
    int n_cols ;
    int search ;
    int flag =1;
    scanf("%d",&n_rows);
    scanf("%d",&n_cols);

    int ** arr=(int **)malloc(n_rows *sizeof(int*));
    for(int i=0; i<n_rows; i++)
    {
        arr[i]=(int*)malloc(n_cols*sizeof(int));
    }
           for(int i=0; i<n_rows; i++)
    {
        for(int j=0; j<n_cols; j++)
        {


          scanf("%d",&arr[i][j]);

        }

    }
    scanf("%d",&search);

     for(int i=0; (i<n_rows); i++)
    {
        for(int j=0; j<n_cols; j++)
        {


          if(search==arr[i][j]){printf("will not take number");flag=0;break;}

        }
      if(flag==0)break;
    }
    if(flag==1){printf("will take number");}
    return 0;
}
