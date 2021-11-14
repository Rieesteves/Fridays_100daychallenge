#include<iostream>
#include<conio.h>
using namespace std;
class toll
{
    static int no_of_cars;
    static float amount;
    public :
        toll()
        {
            cout<<"A car is passed....";
            no_of_cars++;

        }
        void calculate_amt(int ty)
        {
            if(ty==0)
            {
                amount=amount+40;

            }
        }
        void display()
        {
            cout<<"\nTotal no.of cars...."<<no_of_cars;
            cout<<"\nTotal amount collected="<<amount;
        }
};
int toll::no_of_cars=0;
float toll::amount=0;
int main()
{
    int lane_no,type;
    int lane[5]={0,0,0,0,0};
    char ch='y';
    do{
    do
    {
        cout<<"\nEnter Lane number(1-5): ";
        cin>>lane_no;
    }while(lane_no<1 || lane_no>5);

    do
    {
        cout<<"Enter type of car (0 for paying,1 for non paying): ";
        cin>>type;
    }while(type<0 || type>1);

    toll t;
    t.calculate_amt(type);
    t.display();
     switch(lane_no)
    {
        case 1:lane[0]++;
        break;


        case 2:lane[1]++;
        break;

        case 3:lane[2]++;
        break;

        case 4:lane[3]++;
        break;

        case 5:lane[4]++;
        break;
    }
    cout<<"\nAny more cars(y/n)?: ";
    cin>>ch;
    }while(ch=='y' || ch=='Y');
   for(int k=0;k<5;k++)
   {
       cout<<"\nTotal cars passed through lane "<<k+1<<":"<<lane[k];
   }
    return 0;
}