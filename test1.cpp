#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    int c;
    long a;
    string b;
    do
    {
        printf(" \n Press 1 for Alphabetical input \n Press 2 for numerical input \n Press 0 to Exit \n");
        scanf("%d", &c);
        switch(c)
        {
            case 1:
            printf("Enter Alphabetical Input");
            cin >> b;
            printf("Your string is ");
            cout << b;
            break;

            case 2:
            printf("Enter numerical Input");
            scanf("%d", &a);
            printf("Your number is ");
            printf("%d", a);
            break;

            case 0:
            break;

            default:
            printf("Wrong Choice! Please try again.");
            break;



        }

    }while(c!=0);


  // scanf("%d",&a);

  // printf("%d ",a);


}