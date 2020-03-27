/*Program to count and display traffic details in a tollbooth*/

#include <iostream.h>
#include <conio.h>

class TollBooth
{
    static unsigned int predefFare[7];
    unsigned int movements,
                 VehicleMoves[7],           //The number of paid movements of each vehicle
                 NonVehicleMoves[7],        //The number of non-paid movements of each vehicle
                 VehicleSum,
                 NonVehicleSum,
                 vehicle;
    unsigned long TotalMoney;
    unsigned char choice;

    public:
    TollBooth();
    void ShowDetails();
    void ShowMoney();
    int CollectMoney();
    void ShowFare();
};
unsigned int TollBooth::predefFare[7] = {5,10,15,17,20,25,12};

    TollBooth::TollBooth()
    {
        movements=VehicleSum=NonVehicleSum=0;
        for(unsigned int i=0 ; i<7 ; i++)
            VehicleMoves[i]=NonVehicleMoves[i]=0;
    }

    void TollBooth::ShowDetails()
    {
    cout<<"\nTotal number of movements          : "<<movements<<endl;

            VehicleSum=0;
        for(unsigned int i=0 ; i<7 ; i++)
            VehicleSum+=VehicleMoves[i];
    cout<<"\nTotal number of paid movements     : "<<VehicleSum<<endl;
        cout<<"Paid movements of each vehicle : \n"
            <<"1.Two Wheeler    : "<<VehicleMoves[1]<<endl
            <<"2.Auto Rickshaw  : "<<VehicleMoves[2]<<endl
            <<"3.Car            : "<<VehicleMoves[3]<<endl
            <<"4.Jeep           : "<<VehicleMoves[4]<<endl
            <<"5.Bus            : "<<VehicleMoves[5]<<endl
            <<"6.Truck          : "<<VehicleMoves[6]<<endl
            <<"7.Other          : "<<VehicleMoves[0]<<endl;

            NonVehicleSum=0;
    for(i=0 ; i<7 ; i++)
            NonVehicleSum+=NonVehicleMoves[i];
    cout<<"\nTotal number of non paid movements : "<<NonVehicleSum<<endl;
        cout<<"Non Paid movements of each vehicle : \n"
            <<"1.Two Wheeler    : "<<NonVehicleMoves[1]<<endl
            <<"2.Auto Rickshaw  : "<<NonVehicleMoves[2]<<endl
            <<"3.Car            : "<<NonVehicleMoves[3]<<endl
            <<"4.Jeep           : "<<NonVehicleMoves[4]<<endl
            <<"5.Bus            : "<<NonVehicleMoves[5]<<endl
            <<"6.Truck          : "<<NonVehicleMoves[6]<<endl
            <<"7.Other          : "<<NonVehicleMoves[0]<<endl;
    }

    void TollBooth::ShowMoney()
    {
        TotalMoney=0;
        for(unsigned int i = 0 ; i<7 ; i++)
        {
            TotalMoney += VehicleMoves[i]*predefFare[i];
        }
    cout<<"\nMoney collected so far : Rs."<<TotalMoney<<endl;
	cout<<"Money collected from each vehicle(in Rupees) :\n"
	    <<"1.Two Wheeler    : "<<VehicleMoves[1]*predefFare[1]<<endl
	    <<"2.Auto Rickshaw  : "<<VehicleMoves[2]*predefFare[2]<<endl
            <<"3.Car            : "<<VehicleMoves[3]*predefFare[3]<<endl
            <<"4.Jeep           : "<<VehicleMoves[4]*predefFare[4]<<endl
            <<"5.Bus            : "<<VehicleMoves[5]*predefFare[5]<<endl
            <<"6.Truck          : "<<VehicleMoves[6]*predefFare[6]<<endl
            <<"7.Other          : "<<VehicleMoves[0]*predefFare[0]<<endl;
    }

    int TollBooth::CollectMoney()
    {
     cout<<"\nEnter the number correspoding to the current vehicle - \n"
          "1.Two Wheeler\n"
          "2.Auto Rickshaw\n"
          "3.Car\n"
          "4.Jeep\n"
          "5.Bus\n"
          "6.Truck\n"
          "0.Other\n"
          "Any other key to go back to main menu\n"
          "Enter Now : ";
     cin>>vehicle;
     if(vehicle>6)
      return 0;

     movements++;
     ShowFare();
     cout<<"\nPaid or not ?\n"
         <<"Press Y for 'yes' and any other key for 'no' : ";
     cin>>choice;
     if(choice=='Y'||choice=='y')
        VehicleMoves[vehicle]++;
     else
        NonVehicleMoves[vehicle]++;
    return 1;
    }

    void TollBooth::ShowFare()
    {
    cout<<"\nMoney to be collected from ";
    switch(vehicle)
        {
            case 1 : cout<<"Two Wheeler     : ";break;
            case 2 : cout<<"Auto Rickshaw   : ";break;
            case 3 : cout<<"Car             : ";break;
            case 4 : cout<<"Jeep            : ";break;
            case 5 : cout<<"Bus             : ";break;
            case 6 : cout<<"Truck           : ";break;
            case 7 : cout<<"Unknown         : ";
        }
        cout<<"Rs."<<predefFare[vehicle]<<endl;
    }

    void main()
    {
        int choice;
    TollBooth T;

        do
    {
    clrscr();
    cout<<"\nEnter the number corresponding to the required action :\n"
        <<"1.Enter Data\n"
        <<"2.View Movement Details\n"
        <<"3.View Money Details\n"
        <<"4.Exit\n"
        <<"Enter now : ";
        cin>>choice;

            switch(choice)
            {
                case 1 : do
                         {
                            choice = T.CollectMoney();
                         }while(choice != 0);
                         break;
                case 2 : T.ShowDetails();
                         break;
                case 3 : T.ShowMoney();
                         break;
                case 4 : break;
        default: cout<<"Invalid Keystroke!\nInput once more.\n";
        }
        cout<<"\nPress any key.....";
        getch();
    }while(choice != 4);

      }

/*OUTPUT
Enter the number corresponding to the required action :
1.Enter Data
2.View Movement Details
3.View Money Details
4.Exit
Enter now : 1

Enter the number correspoding to the current vehicle -
1.Two Wheeler
2.Auto Rickshaw
3.Car
4.Jeep
5.Bus
6.Truck
0.Other
Any other key to go back to main menu
Enter Now : 1

Money to be collected from Two Wheeler     : Rs.10

Paid or not ?
Press Y for 'yes' and any other key for 'no' : y

Enter the number correspoding to the current vehicle -
1.Two Wheeler
2.Auto Rickshaw
3.Car
4.Jeep
5.Bus
6.Truck
0.Other
Any other key to go back to main menu
Enter Now : 2

Money to be collected from Auto Rickshaw   : Rs.15

Paid or not ?
Press Y for 'yes' and any other key for 'no' : y

Enter the number correspoding to the current vehicle -
1.Two Wheeler
2.Auto Rickshaw
3.Car
4.Jeep
5.Bus
6.Truck
0.Other
Any other key to go back to main menu
Enter Now : 6

Money to be collected from Truck           : Rs.12

Paid or not ?
Press Y for 'yes' and any other key for 'no' : n

Enter the number correspoding to the current vehicle -
1.Two Wheeler
2.Auto Rickshaw
3.Car
4.Jeep
5.Bus
6.Truck
0.Other
Any other key to go back to main menu
Enter Now : 7

Press any key.....

//SCREEN CLEARED

Enter the number corresponding to the required action :
1.Enter Data
2.View Movement Details
3.View Money Details
4.Exit
Enter now : 2

Total number of movements          : 3

Total number of paid movements     : 2
Paid movements of each vehicle :
1.Two Wheeler    : 1
2.Auto Rickshaw  : 1
3.Car            : 0
4.Jeep           : 0
5.Bus            : 0
6.Truck          : 0
7.Other          : 0

Total number of non paid movements : 1
Non Paid movements of each vehicle :
1.Two Wheeler    : 0
2.Auto Rickshaw  : 0
3.Car            : 0
4.Jeep           : 0
5.Bus            : 0
6.Truck          : 1
7.Other          : 0

Press any key.....

//SCREEN CLEARED

Enter the number corresponding to the required action :
1.Enter Data
2.View Movement Details
3.View Money Details
4.Exit
Enter now : 3

Money collected so far : 25
Money collected from each vehicle :
1.Two Wheeler    : 10
2.Auto Rickshaw  : 15
3.Car            : 0
4.Jeep           : 0
5.Bus            : 0
6.Truck          : 0
7.Other          : 0

Press any key.....

//SCREEN CLEARED

Enter the number corresponding to the required action :
1.Enter Data
2.View Movement Details
3.View Money Details
4.Exit
Enter now : 4

Press any key.....
*/
