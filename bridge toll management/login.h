void login(void)

{
     system("color 06");
	int a=0,i=0;
    char username[10],c=' ';
    char password[10],code[10];
    char user[10]="Tamzid";
    char pass[10]="1234";
    do
{

    printf("\n\n");
    printf("\n \t\t\t\t\t ||======================================================|| LOGIN ||==========================================================||\n  ");
    printf("\n \t\t\t\t\t ||===========================================================================================================================||\n");
    printf(" \n\n \t\t\t\t\t\t\t\t\t                   ENTER YOUR USERNAME = ");
	scanf("%s", &username);
	printf(" \n\n \t\t\t\t\t\t\t\t\t                   ENTER YOUR PASSWORD = ");
	while(i<10)
	{
	    password[i]=getch();
	    c=password[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	password[i]='\0';
	//char code=password;
	i=0;
	//scanf("%s",&password);
		if(strcmp(username,"Tamzid")==0 && strcmp(password,"1234")==0) // Username Tamzid and Password 1234
	{
	printf("  \n\n\n \t\t\t\t\t\t\t\t\t\t\t     [YOUR LOGIN IS SUCCESSFUL!!!]");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press any key to continue...");
	getch();    //holds the screen
	a=1;
	break;
	}
	else
	{
		printf("\n\n\n \t\t\t\t\t\t\t\t\t               [SORRY !!!!  LOGIN IS UNSUCESSFUL]\n\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t Trying Again.....\n");
		sleep(2);
		system("cls");




	}
}
	while(a==0);

		system("cls");
}
