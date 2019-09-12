//Programm For Finding SI.

#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    float p,r,t,s; //definig four floating type Variable
    gotoxy(40,1);
    printf("This is Program for Finding SI\n"); /* Function for Output Printing*/
    gotoxy(2,5);
    printf("Please Enter The Value of P,R and T\n");
    scanf("%f%f%f",&p,&r,&t); //Function For taking Value From User
    gotoxy(40,8);
    printf("Your Input\n");
    gotoxy(40,9);
    printf("P is==%f",p);
    gotoxy(40,10);
    printf("R is ==%f",r);
    gotoxy(40,11);
    printf("T is ==%f",t);
    gotoxy(40,13);
    printf("Press Enter For Finding SI");
    getch();
    s=(p*r*t)/100; //Formula defing for Simple Intersest
    gotoxy(40,15);
    printf("S.I = %f",s); //Output functon
    getch(); //Hold Screen while you dont enter any character
    return 0;

}
