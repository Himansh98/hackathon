struct articles
{
    int sno;
    char title[20];
    char article[200];
}a;

struct comments
{
    int sno;
    char username[20];
    char comment[200];
    int upvote;
    int downvote;
    int bin;//1 stands for it being useless, 0 stands for it being  useful//
}b;

//for the admin.......to add articles//
int main()
{
    FILE *fp1;
    fp1=fopen("1.txt",w);
    a.sno=1;
    while(temp==1)
    {
        printf("enter title of article\n");
        scanf("%s",&a.title);
        printf("enter data for '%s'\n",a.title);
        scanf("%s",&a.article);
        fwrite(&a,sizeof(a),1,fp1);
        printf("do you wish to add more data?\n");
        scanf("%s",&string);
        if(strcmp(string,"yes")==0)
            {
                temp=1;
                a.sno++;
            }
        else
            temp=0;
    }
    fclose(fp1);


}
//for the users......to see thing and participate//
void participant
{
    printf( "1. feature_01\n
             2. feature_02\n
             3. feature_03\n
             which would you like to go through?\n"
          );
    scanf("%d",temp);
    switch(temp)
        {
        case 1:
            point1:
                fopen("1.txt",r);
                printf("here is a list of all the articles\n");
                while(fread(a,sizeof(a),1,fp1)!=NULL)
                {
                    printf("%d %s\n",a.sno,a.title);
                }
                fclose(fp1);
                fopen("1.txt",r);
                printf("which article would you like to read about?\n");
                scanf("%d",&temp);
                int temp_1=-1;
                while(temp_1!=temp)
                {
                    fread(a,sizeof(a),1,fp1);
                    temp_1=a.sno;
                }
                printf("here's your article\n");
                printf("%s\n",a.article);
                printf("would you like to contribute/suggest/donate");
                char string[5];
                scanf("%s",&string);
                if(strcmp(string,"yes")==0)
                {
                    printf("
                }
                else
                {
                    fclose(fp1);
                }


        }

}

