#include <bits/stdc++.h>
using namespace std;
int a[5][5],i,j,k;
unsigned long long l,c;
char pl1[50],pl2[50],l1,c1;
int main()
{
    printf("X si 0                   v2.8.12                      Varianta Code::Blocks 16.01\n\nInstructiuni:\n\n");
    printf("Se introduce linia si coloana dorita pentru a modifica ,,-'' cu ,,X'' sau ,,0''.\n\n");
    a[0][1]=a[1][0]=-1; a[0][2]=a[2][0]=-2; a[0][3]=a[3][0]=-3; a[0][0]=-4;
    printf("Jucator1(X): ");
        cin>>pl1;
    printf("Jucator2(0): ");
        cin>>pl2;
    while(k!=9)
    {
        k++;
        for(i=0;i<=3;i++)
        {
            printf("\n\n");
            for(j=0;j<=3;j++)
            {
                if(a[i][j]==-1)
                    printf("1 ");
                if(a[i][j]==-2)
                    printf("2 ");
                if(a[i][j]==-3)
                    printf("3 ");
                if(a[i][j]==-4)
                    printf("  ");
                if(a[i][j]==0)
                    printf("- ");
                if(a[i][j]==1)
                    printf("0 ");
                if(a[i][j]==2)
                    printf("X ");
            }
        }
        if((((a[1][1]==a[2][2])&&(a[2][2]==a[3][3]))&&(a[1][1]))||((((a[3][1]==a[2][2])&&(a[2][2]==a[1][3])))&&(a[3][1]))||((((a[1][1]==a[1][2])&&(a[1][2]==a[1][3])))&&(a[1][1]))||((((a[2][1]==a[2][2])&&(a[2][2]==a[2][3])))&&(a[2][1]))||((((a[3][1]==a[3][2])&&(a[3][2]==a[3][3])))&&(a[3][1]))||((((a[1][1]==a[2][1])&&(a[2][1]==a[3][1])))&&(a[1][1]))||((((a[1][2]==a[2][2])&&(a[2][2]==a[3][2])))&&(a[1][2]))||((((a[1][3]==a[2][3])&&(a[2][3]==a[3][3])))&&(a[1][3])))
        {
            printf("\n\n\n\n\n\n\n\n");
            if(a[1][1]==2) cout<<pl1;
            else cout<<pl2;
            printf(" a castigat!");
            printf("\n\nFINAL DE JOC.\nAPASATI ORICE TASTA PENTRU A INCHIDE!\n");
            return 0;
        }
        printf("\n");
        if(k%2==1) cout<<"Randul lui "<<pl1<<"(X).";
        if(k%2==0) cout<<"Randul lui "<<pl2<<"(0).";
        printf("\nMiscare(Linie Coloana): ");
        cin>>l1>>c1;
        l=l1-'0';
        c=c1-'0';
        if(l<0)
            l==5;
        if(c<0)
            c==5;
        while (l>=4 or c>=4)
        {
         if(k%2==1)
            cout<<"Randul lui "<<pl1<<"(X).";
         if(k%2==0)
            cout<<"Randul lui "<<pl2<<"(0).";
         printf("\nEroare!\nREINTRODUCE!\nMiscare(Linie Coloana): ");
         cin>>l1>>c1;
         l=l1-'0';
         c=c1-'0';
         if(l<0)
            l==5;
         if(c<0)
            c==5;
        }
        if(a[l][c]==0)
            a[l][c]=k%2+1;
        else
        while(a[l][c]!=0)
        {
            printf("\n\nNU TRISA!\nREINTRODUCE!\nMiscare(Linie Coloana): ");
            cin>>l>>c;
            while (l>=4 or c>=4)
            {
             if(k%2==1)
                cout<<"Randul lui "<<pl1<<"(X)";
             if(k%2==0)
                cout<<"Randul lui "<<pl2<<"(0)";
             printf("\nEroare!REINTRODUCE!\nMiscare(Linie Coloana): ");
             cin>>l1>>c1;
             l=l1-'0';
             c=c1-'0';
             if(l<0)
                l==5;
             if(c<0)
                c==5;
            }
            if(a[l][c]==0)
            {
             a[l][c]=k%2+1;
             break;
            }
        }
    }
     for(i=0;i<=3;i++)
        {
            printf("\n \n");
            for(j=0;j<=3;j++)
            {
                if(a[i][j]==-1)
                    printf("1 ");
                if(a[i][j]==-2)
                    printf("2 ");
                if(a[i][j]==-3)
                    printf("3 ");
                if(a[i][j]==-4)
                    printf("  ");
                if(a[i][j]==0)
                    printf("- ");
                if(a[i][j]==1)
                    printf("0 ");
                if(a[i][j]==2)
                    printf("X ");
            }
        }
    printf("\n\nEGALITATE\n");
    printf("\n\nFINAL DE JOC.\nAPASATI ORICE TASTA PENTRU A INCHIDE!\n");
    return 0;
}
