#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    char y;
    int n , quantity , pp , a , b;
    string upi;

    srand((unsigned int) time(NULL));
    int c = (rand() % 20)+10;
    
    string breakfast[] = { "Tea" , "Dosa" , "IDLI" , "ALOO PARANTHA" , "Vadapav" , "Pav bhaji" , "Misal pav" };
    string meal[] = {"Full VEG -plate meal" , "Full Non-Veg plate meal" , "Balanced plate"};
    string menu[] = {"0" , "Breakfast" , "Lunch" , "High-tea" , "Dinner"};
    int priceb[7] = {10 , 60 , 40 , 50 , 15 , 50 , 20};
    int pricem[3] = {170 , 200 , 180};
    
    
    cout<<"\n\nWELCOME TO THE FOOD ORDERING APP\n\n";
    cout<<"Would you like to order something from here? (y/n)";
    cin>>y;

    if(y =='n')
    {
        return 0;
    }

    cout<<"What are you in Mood of? \n1. Breakfast (1)\n2. Lunch (2)\n3. High-tea(3)\n4. Supper(4)\nChoose one number : ";
    cin>>n;

    cout<<"That sounds Like you are hungry \nNow here choose from our "<<menu[n]<<" Menu :  \n\n";

    switch(n)
    {
        case 1:

            for(int i = 0 ; i < 7 ; i++)
            {
                cout<<i+1<<". "<<breakfast[i]<<" for ₹"<<priceb[i]<<"\n";
            }
            
            break;

        case 2:

            for(int i = 0 ; i < 3 ; i++)
            {
                cout<<i+1<<". "<<meal[i]<<" for ₹"<<pricem[i]<<"\n";
            }
            
            break;
         
        case 3:
            for(int i = 0 ; i < 7 ; i++)
            {
                cout<<i+1<<". "<<breakfast[i]<<" for ₹"<<priceb[i]<<"\n";
            }
            
            break;
        case 4:
            for(int i = 0 ; i < 3 ; i++)
            {
                cout<<i+1<<". "<<meal[i]<<" for ₹"<<pricem[i]<<"\n";
            }
            
            break;
        default:
            break;

    }
    cout<<"\nType all the things you want from the list(without space)";
    cin>>a;
    cout<<"\n\n";
    int total;
    

    while(a!=0)
    {
        pp = a % 10;
        a /= 10;
        if(n == 1 || n == 3)
        {
            total +=priceb[pp-1];
            cout<<breakfast[pp-1]<<" for ₹ "<<priceb[pp-1]<<" \n";
        }
        else
        {
            total += pricem[pp-1];
            cout<<meal[pp-1]<<" for ₹ "<<pricem[pp-1]<<"\n";
        }
    }

    cout<<"\n\nTOTAL MONEY = ₹"<<total<<" + TAX(₹"<<float(total)*0.18<<")"<<"\nGrand Total = ₹"<<float(total)+(float(total)*0.18)<< "\n\n";

    
    cout<<"How do you wish to pay? \n1. COD\n2. ONLINE\n";
    cin>>b;

    if(b==1)
    {
        do
        {
        cout<<"Your order will be here by "<<c<<" Minutes\n";
        sleep(1);
        c--;
        }while(c != 0);

        cout<<"\n\nPLEASE CHECK YOUR DOOR YOUR ORDER WILL BE THERE :)  \nFor complaints call at : 9876543210\n";
        
    }
    else
    {
        cout<<"Your UPI ID? ";
        cin>>upi;

        cout<<"Successfully sent the amount request Please pay and wait :) \n";
        sleep((rand()%5)+3);
        cout<<"\nPAYMENT RECIEVED ✓\n\n";
        
        do
        {
        cout<<"Your order will be here by "<<c<<" Minutes\n";
        sleep(1);
        c--;
        }while(c != 0);

        cout<<"\n\nPLEASE CHECK YOUR DOOR YOUR ORDER WILL BE THERE :)  \nFor complaints call at : 9876543210\n";
        

    }


    
    return 0;
    
}