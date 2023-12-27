#include <iostream>
#include <unistd.h>
using namespace std;

class Product{
    public:

    char continueornot;
    int n , quantity , pricepoint , listofthings , b;
    string upi;
    
    
    void Prodname(){

        srand((unsigned int) time(NULL));
        int c = (rand() % 20)+10;
    
        string shop[] = { "T-shirts" , "Trousers" , "Jeans" , "Perfumes" , "Watches" , "Socks" , "Acessories" };
        string overview[] = {"Tshirt" , "Shirt" , "Pants"};
        string menu[] = {"0" , "Mens" , "Womens" , "Children" , "idkmore"};
        int priceb[7] = {500 , 1000 , 400, 500 , 150 , 999 , 150};
        int pricem[3] = {1700 , 700 , 180};


        cout<<"What are you in Mood of? \n1. MENS (1)\n2. WOMEN (2)\n3. KIDS(3)\n4. ACESSORIES ACC TO DRESS(4)\nChoose one number : ";
        cin>>n;

        cout<<"That sounds Like you are hungry \nNow here choose from our "<<menu[n]<<" Menu :  \n\n";

        switch(n)
        {
        case 1:

            for(int i = 0 ; i < 7 ; i++)
            {
                cout<<i+1<<". "<<shop[i]<<" for ₹"<<priceb[i]<<"\n";
            }
            
            break;

        case 2:

            for(int i = 0 ; i < 3 ; i++)
            {
                cout<<i+1<<". "<<overview[i]<<" for ₹"<<pricem[i]<<"\n";
            }
            
            break;
         
        case 3:
            for(int i = 0 ; i < 7 ; i++)
            {
                cout<<i+1<<". "<<shop[i]<<" for ₹"<<priceb[i]<<"\n";
            }
            
            break;
        case 4:
            for(int i = 0 ; i < 3 ; i++)
            {
                cout<<i+1<<". "<<overview[i]<<" for ₹"<<pricem[i]<<"\n";
            }
            
            break;
        default:
            break;
    }
    
    
    cout<<"\nType all the things you want from the list(without space)";
    cin>>listofthings;
    cout<<"\n\n";
    int total;
    

    while(listofthings!=0)
    {
        pricepoint = listofthings % 10;
        listofthings /= 10;
        if(n == 1 || n == 3)
        {
            total +=priceb[pricepoint-1];
            cout<<shop[pricepoint-1]<<" for ₹ "<<priceb[pricepoint-1]<<" \n";
        }
        else
        {
            total += pricem[pricepoint-1];
            cout<< overview[pricepoint-1] <<" for ₹ "<<pricem[pricepoint-1]<<"\n";
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

        cout<<"\n\nYOUR TRANSACTION HAS BEEN SUCCESSFULL :)  \nFor complaints call at : 999999999\n";
        
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
        cout<<"Your order will be here by "<<c<<" Seconds\n";
        sleep(1);
        c--;
        }while(c != 0);

        cout<<"\n\nPLEASE CHECK YOUR DOOR YOUR ORDER WILL BE THERE :)  \nFor complaints call at : 9876543210\n";
        

    }
      }

};

int main()
{
    Product prod;
    char continueornot;
    int n , quantity , pricepoint , listofthings , b;
    string upi;
    cout<<"\n\n------------------------WELCOME TO THE SHOPPING APP--------------------------\n\n";
    cout<<"Would you like to order something from here? (y/n)";
    cin>>continueornot;
    if(toupper(continueornot) =='Y')
    {
       prod.Prodname();
    }
    else{
        return 0;
    }      
    return 0;   
}