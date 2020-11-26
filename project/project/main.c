#include <stdio.h>

#define N 8

int main(){
    int i, j;
    char* arr[N][N];
    char anbr[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    printf(" ");
    
    for(i=1;i<N+1;i++)
        printf("%d", i);
    
        printf("\n");
    
    for(i=0;i<N;i++)
    {
            for(j=0;j<N;j++)
            {
                if(i == 0 && 1 <= j <= N-2)
                    arr[i][j] = "┬";
                else if (i == 0 && j == 0)
                    arr[i][j] = "┌";
                else if (i == 0 && j == N-1)
                    arr[i][j] = "┐";
                else if(1 <= i <= 6 && j == 0)
                    arr[i][j] = "├" ;
                else if (i == N-1 && j == 0)
                    arr[i][j] = "└";
                else if (i == N-1 && 1 <= j <= N-2)
                    arr[i][j] = "┴";
                else if (i == N-1 && j == N-1)
                    arr[i][j] = "┘";
                else if (1 <= i <= N-2 && j == N-1)
                    arr[i][j] = "┤";
                else if((i == N/2-1 && j == N/2-1) || (i == N/2 && j == N/2))
                    arr[i][j] = "○" ;
                else if ((i == N/2-1 && j == N/2) || (i == N/2 && j == N/2-1))
                    arr[i][j] = "●";
                else
                    arr[i][j] = "┼";
            }
    }
    
    for(i=0;i<N;i++)
    {
        printf("%c", anbr[i]);
        
        for(j=0;j<N;j++)
            printf("%s", arr[i][j]);
        
        printf("\n");
    }
    return 0;
}
                    
                    
                    
                
                


 
