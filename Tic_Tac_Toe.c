#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, z;
    int p1 = 5;
    int p2 = 9;
    int t[3][3], pos, val, x;
    char part1[25];
    char part2[25];
   
    // getting participants details
    printf("Enter the name of Participant 1: ");
    scanf("%s", part1);
   
    printf("Enter the name of Participant 2: ");
    scanf("%s", part2);
   
    // initializing tic-tak-tio
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            val = i*10+j;
            t[i-1][j-1] = val;
        }
    }
   
    // starting the game
    printf("\nGame starts now...\n");
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            printf("%d\t",t[i-1][j-1]);
        }
        printf("\n");
    }
   
    for (z=0; z<9; z++){
        if(z%2 == 0){
            printf("\n%s's turn...", part1);
            x = p1;
        } else {
            printf("\n%s's turn...", part2);
            x = p2;
        }
       
        printf("\nEnter position, where you would like to place your pan: ");
        scanf("%d", &pos);  // derive x n y
       
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(t[i][j] == pos){
                    t[i][j] = x;
                }
            }
        }
       
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf("%d\t",t[i][j]);
            }
            printf("\n");
        }
       
        if((t[0][0] == t[0][1] && t[0][0]== t[0][2]) || (t[1][0] == t[1][1] && t[1][0]== t[1][2]) ||
        (t[2][0] == t[2][1] && t[2][0]== t[2][2]) || (t[0][0] == t[1][0] && t[0][0]== t[2][0]) ||
        (t[0][1] == t[1][1] && t[0][1]== t[2][1]) || (t[0][2] == t[1][2] && t[0][2]== t[2][2]) ||
        (t[0][0] == t[1][1] && t[0][0]== t[2][2]) || (t[0][2] == t[1][1] && t[0][2]== t[2][0]))
        {
            if(x == p1){
                printf("\n\n\nWinner is %s", part1);
            } else {
                printf("\n\n\nWinner is %s", part2);
            }
            return;
        }
    }
    printf("Draw match...");
}
