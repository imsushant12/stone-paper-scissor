int game(char,char);
main()
{
    int n;
    char you,comp,result;
    srand(time(0));
    n=rand()%100;
    if(n<33)
        comp='s';
    else if(n>33 && n<66)
        comp='p';
    else
        comp='z';
    printf("Enter s for stone, p for paper and z for scissor\n");
    scanf("%c",&you);
    result=game(you,comp);
    if(result==0)
        printf("Game Draw!\n");
    else if(result==1)
        printf("You have won the game!\n");
    else
        printf("You have lost the game!\n");
    printf("YOu choose : %c and Computer choose : %c\n",you,comp);

}
int game(char you,char comp)
{
    if(you==comp)
        return 0;

    if(you=='s'&& comp=='p')
        return -1;
    else if(you=='p'&& comp=='s')
        return 1;

    if(you=='s'&& comp=='z')
        return 1;
    else if(you=='z'&& comp=='s')
        return -1;

    if(you=='p'&& comp=='z')
        return -1;
    else if(you=='z'&& comp=='p')
        return 1;
}
