#include <stdio.h>

#define N 8

char* gameboard[N][N];

void init_othello();
void print_othello();

void init_othello(){
  
    int i, j;
    
    for(i=0;i<N+1;i++)
    {
        for(j=0;j<N;j++)
        {
                if(i == 0 && 1 <= j <= N-2) //판을 그리기 위해 각 배열에 알맞은 문자 입력
                    gameboard[i][j] = "┬";
                else if (i == 0 && j == 0)
                    gameboard[i][j] = "┌";
                else if (i == 0 && j == N-1)
                    gameboard[i][j] = "┐";
                else if(1 <= i <= 6 && j == 0)
                    gameboard[i][j] = "├" ;
                else if (i == N-1 && j == 0)
                    gameboard[i][j] = "└";
                else if (i == N-1 && 1 <= j <= N-2)
                    gameboard[i][j] = "┴";
                else if (i == N-1 && j == N-1)
                  gameboard[i][j] = "┘";
                else if (1 <= i <= N-2 && j == N-1)
                  gameboard[i][j] = "┤";
                else if((i == N/2-1 && j == N/2-1) || (i == N/2 && j == N/2)) //초기 말 배치
                    gameboard[i][j] = "○" ;
                else if ((i == N/2-1 && j == N/2) || (i == N/2 && j == N/2-1))
                    gameboard[i][j] = "●";
                else
                    gameboard[i][j] = "┼";
            }
    }
}
void print_othello(){
    int i,j;
    char anbr[26] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    printf(" ");
    
    for(i=1;i<N+1;i++)
        printf("%d", i);
    printf("\n");
    
    for(i=0;i<N;i++)
    {
            printf("%c", anbr[i]);
        
        for(j=0;j<N;j++)
            printf("%s", gameboard[i][j]);
        
        printf("\n");
    }
}
            
void main()
{
    init_othello();
    print_othello();
}


                    
                    
                    
                
                


 
