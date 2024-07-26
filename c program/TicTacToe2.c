// in this project,we are creating a game called tic tac toe in which there are 9 blocks where 2 person plays.
// one have O sign and other have x sign.if 3 x or 3 o occur in a straight line,that person wins the game.
// if not occurs,then it's a draw.
#include<stdio.h>
// declaration of the game space using a 3x3 array(2d array).
 char arr[3][3]={
        {'a','b','c'},
        {'d','e','f'},
        {'g','h','i'}
    };
    // defining variables to use---
    int usero,userx,m=0;
    //function for taking input from user O
void InputChoiceOfO()
{
    printf("usero please enter your position");
    scanf("%d",&usero);
    if(usero==1)
    {
        arr[0][0]='o';
    }
    else if(usero==2)
    {
        arr[0][1]='o';
    }
    else if (usero==3)
    {
        arr[0][2]='o';
    }
    else if (usero==4)
    {
        arr[1][0]='o';
    }
    else if (usero==5)
    {
        arr[1][1]='o';
    }
    else if (usero==6)
    {
        arr[1][2]='o';
    }
    else if (usero==7)
    {
        arr[2][0]='o';
    }
    else if (usero==8)
    {
        arr[2][1]='o';
    }
    else if (usero==9)
    {
        arr[2][2]='o';
    }
    else
    {
        printf("not valid choice");
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
}
//function for taking input from user x
void InputChoiceOfX()
{
    printf("userx please enter your position");
    scanf("%d",&userx);
    if(userx==1)
    {
        arr[0][0]='x';
    }
    else if(userx==2)
    {
        arr[0][1]='x';
    }
    else if (userx==3)
    {
        arr[0][2]='x';
    }
    else if (userx==4)
    {
        arr[1][0]='x';
    }
    else if (userx==5)
    {
        arr[1][1]='x';
    }
    else if (userx==6)
    {
        arr[1][2]='x';
    }
    else if (userx==7)
    {
        arr[2][0]='x';
    }
    else if (userx==8)
    {
        arr[2][1]='x';
    }
    else if (userx==9)
    {
        arr[2][2]='x';
    }
    else
    {
        printf("not valid choice");
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
}
// function for printing the array or gamespace.
void printArray()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
}
// function for checking the winner
void checkWin()
{
    if((arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='o')||(arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='o')||(arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='o')||(arr[0][0]=='o'&&arr[1][0]=='o'&&arr[2][0]=='o')||(arr[0][1]=='o'&&arr[1][1]=='o'&&arr[2][1]=='o')||(arr[0][2]=='o'&&arr[1][2]=='o'&&arr[2][2]=='o')||(arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o')||(arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o'))
    {
        printf("congrats!!usero you won the game");
        m=1;
    }
    else if((arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='x')||(arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='x')||(arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='x')||(arr[0][0]=='x'&&arr[1][0]=='x'&&arr[2][0]=='x')||(arr[0][1]=='x'&&arr[1][1]=='x'&&arr[2][1]=='x')||(arr[0][2]=='x'&&arr[1][2]=='x'&&arr[2][2]=='x')||(arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x')||(arr[0][2]=='x'&&arr[1][1]=='x'&&arr[2][0]=='x'))
    {
        printf("congrats!!userx you won the game");
        m=1;
    }
}
// main function to execute the code
int main()
{
    // using a loop for taking input again and again until we find the winner
    while(m!=1)
    {

    printArray();
    cho();
    check();
    if(m==1)
    break;
    chx();
    check();
    if(m==1)
    break;
    cho();
    check();
    if(m==1)
    break;
    chx();
    check();
    if(m==1)
    break;
    cho();
    check();
    if(m==1)
    break;
    chx();
    check();
    if(m==1)
    break;
    cho();
    check();
    if(m==1)
    break;
    chx();
    check();
    if(m==1)
    break;
    cho();
    check();
    if(m==1)
    break;
    else{
        printf(" its a draw");
        break;
    }
    }
}    