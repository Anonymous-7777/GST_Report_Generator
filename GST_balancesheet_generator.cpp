#include<iostream>
using namespace std;
#include<conio.h>
#include<cstdlib>
int main()
{
    float rate,amount,input;
    float fa;
    string gstn;
    float ob=0;
    float bl=0;
    float tp=0;
    float ta=0;
    float tpa=0;
    float tsa=0;
    int x=1;
    int y=1;
    int z=1;
    int a,b,c,year;
    cout<<"\t \t Welcome to GST Balancesheet Generator"<<endl;
    cout<<"Enter your firm name :"<<endl;
    cin>>gstn;
    cout<<"Enter the financial year :"<<endl;
    cin>>year;
    cout<<"Enter the opening balance :"<<endl;
    cin>>ob;

    while(x>0)
    {
        cout<<gstn<<endl;
        cout<<year<<endl;    
        cout<<"Press 1 for seeing the gst report, 2 for purchase entry, 3 for sales entry :"<<endl;
        cin>>input;
        if(input==1)
        {
            system("cls");
            cout<<"Opening balance of the year is : Rs. "<<ob<<endl;
            cout<<"Your toatal purchase amount is : Rs."<<tpa<<endl;
            cout<<"Your total sales amount is : Rs. "<<tsa<<endl;
            cout<<"Your balance before taxation is : Rs."<<bl<<endl;
            cout<<"Total tax to be Paid is : Rs."<<tp<<endl;
            cout<<"Your final Balance After Taxation : Rs."<<bl-tp<<endl;
            
        }
        
        else if(input==2)
        {
            while (y>0)
            {
             system("cls");
            cout<<gstn<<endl;
            cout<<year<<endl; 
            cout<<"Enter the rate of gst :"<<endl;
            cin>>rate;
            cout<<"Enter the purchase amount :"<<endl;
            cin>>amount;
            fa=amount+(amount * (rate)/100);
            if(amount>ob||fa>ob)
            {
                cout<<"Not enough Balance"<<endl;
                getch();
            }
            else
            {
            tpa=tpa+fa;
            bl=ob-fa;
            tp=tp+(amount *(rate/100));
            cout<<"The grand total is : Rs. "<<fa<<endl;
            cout<<"Do you want to continue (press 1 for yes and 2 for no) : "<<endl;
            cin>>a;
            }
            if(a==1)
            {
                y=y+0;
            }
            else if(a==2)
            {
                y--;
            }

            }

        }
        else if(input==3)
        {
            while (z>0)
            {
            system("cls");
            cout<<gstn<<endl;
            cout<<year<<endl; 
            cout<<"Enter the rate of gst :"<<endl;
            cin>>rate;
            cout<<"Enter the sale amount :"<<endl;
            cin>>amount;
            fa=amount+(amount * (rate)/100);
            tsa=tsa+fa;
            bl=ob+amount;
            tp=tp+(amount *(rate/100));
            cout<<"The grand total is : Rs. "<<fa<<endl;
            cout<<"Do you want to continue (press 1 for yes and 2 for no) : "<<endl;
            cin>>b;
            if(b==1)
            {
                z=z+0;
            }
            if(b==2)
            {
                z--;
            }
            }

        }
        else
        {
            cout<<"Please enter valid input "<<endl;
            getch();
        }
        cout<<"Press 1 for continuing in this year and 2 for ending the year with final report : "<<endl;
        cin>>c;
        if(c==1)
        {
            x=x+0;
        }
        else if(c==2)
        {
            system("cls");
           cout<<"Opening balance of the year is : Rs. "<<ob<<endl;
            cout<<"Your toatal purchase amount is : Rs."<<tpa<<endl;
            cout<<"Your total sales amount is : Rs. "<<tsa<<endl;
            cout<<"Your balance before taxation is : Rs."<<bl<<endl;
            cout<<"Total tax to be Paid is : Rs."<<tp<<endl;
            cout<<"Your final Balance After Taxation : Rs."<<bl-tp<<endl;
            break;
        }
        else
        {
            cout<<"Please enter valid input "<<endl;
            getch();
        }
    }
}