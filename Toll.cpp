#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;

class fare_details
{
protected:
    int fee;
public:
    void category1(char jtype)
     {
         switch(jtype)
         {
            case '1': fee=50;
                        break;
            case '2': fee=75;
                        break;
            case '3': fee=0;
                        break;
        }
     }
     void category2(char jtype)
     {
         switch(jtype)
         {
            case '1': fee=75;
                        break;
            case '2': fee=115;
                        break;
            case '3': fee=0;
                        break;
        }
     }
     void category3(char jtype)
     {
         switch(jtype)
         {
            case '1': fee=160;
                        break;
            case '2': fee=240;
                        break;
            case '3': fee=0;
                        break;
        }
     }
     void category4(char jtype)
     {
         switch(jtype)
         {
            case '1': fee=170;
                        break;
            case '2': fee=255;
                        break;
            case '3': fee=0;
                        break;
        }
     }
     void category5(char jtype)
     {
         switch(jtype)
         {
            case '1': fee=245;
                        break;
            case '2': fee=370;
                        break;
            case '3': fee=0;
                        break;
        }
     }
     void category6(char jtype)
     {
         switch(jtype)
         {
            case '1': fee=300;
                        break;
            case '2': fee=455;
                        break;
            case '3': fee=0;
                        break;
        }
     }
     void category7(char jtype)
     {
         switch(jtype)
         {
            case '1': fee=0;
                        break;
            case '2': fee=0;
                        break;
            case '3': fee=0;
                        break;
        }
     }
    fare_details(){}
    fare_details(char category, char jtype)
    {
        switch(category)
        {
            case '1': category1(jtype);
                    break;

            case '2': category2(jtype);
                    break;

            case '3': category3(jtype);
                    break;

            case '4': category4(jtype);
                    break;

            case '5': category5(jtype);
                    break;

            case '6': category6(jtype);
                    break;

            case '7': category7(jtype);
                        break;

        }
    }

};
class tollbooth: public fare_details
{

    static int num_vehicles;
    static int total_cash;
    static char catgry;
    static char j_type;
    static int amount;
public:
    tollbooth()
    {
    }
    tollbooth(char cat, char jtype): fare_details(cat,jtype)
    {

        num_vehicles++;
        total_cash=total_cash+fee;
        cout<<endl<<endl;
        cout<<"Number of vehicles so far: "<<num_vehicles<<endl;
        cout<<"Total cash for today: "<<total_cash<<endl<<endl;
        catgry=cat;
        j_type=jtype;
        amount=fee;

    }
    void newday() {num_vehicles=0; total_cash=0; catgry='0'; j_type='0'; amount=0;}
    void friend generate_receipt();
    void friend print_date();
};
int tollbooth::num_vehicles=0;
int tollbooth::total_cash=0;
char tollbooth::catgry='0';
char tollbooth::j_type='0';
int tollbooth::amount=0;

void generate_receipt()
{
    switch(tollbooth::catgry)
    {
        case '1':   cout<<"Vehicle type: [CATEGORY 1]Car/Jeep/Three Wheeler/LMV"<<endl;
                    static ofstream fileout1;
                    fileout1.open("Record.txt", ios::out | ios::app);
                    if (fileout1.is_open())
                        {
                            fileout1<< "Vehicle type: [CATEGORY 1]Car/Jeep/Three Wheeler/LMV \n";
                            fileout1.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
        case '2':   cout<<"Vehicle type: [CATEGORY 2]LCV/Tractor with Triller/LGV or Mini Bus"<<endl;
                    static ofstream fileout2;
                    fileout2.open("Record.txt", ios::out | ios::app);
                    if (fileout2.is_open())
                        {
                            fileout2<< "Vehicle type: [CATEGORY 2]LCV/Tractor with Triller/LGV or Mini Bus \n";
                            fileout2.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
        case '3':   cout<<"Vehicle type: [CATEGORY 3]Bus/Truck/Road Roller(Two Axles)"<<endl;
                    static ofstream fileout3;
                    fileout3.open("Record.txt", ios::out | ios::app);
                    if (fileout3.is_open())
                        {
                            fileout3<< "Vehicle type: [CATEGORY 3]Bus/Truck/Road Roller(Two Axles) \n";
                            fileout3.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
        case '4':   cout<<"Vehicle type: [CATEGORY 4]Three Axles Commercial Vehicle"<<endl;
                    static ofstream fileout4;
                    fileout4.open("Record.txt", ios::out | ios::app);
                    if (fileout4.is_open())
                        {
                            fileout4<< "Vehicle type: [CATEGORY 4]Three Axles Commercial Vehicle \n";
                            fileout4.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
        case '5':   cout<<"Vehicle type: [CATEGORY 5]MAV(Four to Six Axles), Heavy Construction Machinery, Earth Moving Equipment"<<endl;
                    static ofstream fileout5;
                    fileout5.open("Record.txt", ios::out | ios::app);
                    if (fileout5.is_open())
                        {
                            fileout5<< "Vehicle type: [CATEGORY 5]MAV(Four to Six Axles), Heavy Construction Machinery, Earth Moving Equipment \n";
                            fileout5.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
        case '6':   cout<<"Vehicle type: [CATEGORY 6]Oversized vehicle(Seven or more axles)"<<endl;
                    static ofstream fileout6;
                    fileout6.open("Record.txt", ios::out | ios::app);
                    if (fileout6.is_open())
                        {
                            fileout6<< "Vehicle type: [CATEGORY 6]Oversized vehicle(Seven or more axles) \n";
                            fileout6.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
        case '7':   cout<<"Vehicle type: [CATEGORY 7]Exempted vehicles"<<endl;
                    static ofstream fileout7;
                    fileout7.open("Record.txt", ios::out | ios::app);
                    if (fileout7.is_open())
                        {
                            fileout7<< "Vehicle type: [CATEGORY 7]Exempted vehicles \n";
                            fileout7.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
    }
    switch(tollbooth::j_type)
    {
        case '1':   cout<<"Journey type: Single"<<endl;
                    static ofstream fileout8;
                    fileout8.open("Record.txt", ios::out | ios::app);
                    if (fileout8.is_open())
                        {
                            fileout8<< "Journey type: Single \n";
                            fileout8.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
        case '2':   cout<<"Journey type: Return"<<endl;
                    static ofstream fileout9;
                    fileout9.open("Record.txt", ios::out | ios::app);
                    if (fileout9.is_open())
                        {
                            fileout9<< "Journey type: Return \n";
                            fileout9.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;
        case '3':   cout<<"Journey type: Monthly_Pass"<<endl;
                    static ofstream fileout10;
                    fileout10.open("Record.txt", ios::out | ios::app);
                    if (fileout10.is_open())
                        {
                            fileout10<< "Journey type: Monthly_Pass \n";
                            fileout10.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                    break;

    }
    cout<<"Amount collected: Rs."<<tollbooth::amount;
    static ofstream fileout11;
    fileout11.open("Record.txt", ios::out | ios::app);
                    if (fileout11.is_open())
                        {
                            fileout11<< "Amount collected: Rs."<<tollbooth::amount<<"\n\n";
                            fileout11.close();
                        }

                    else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }

}
void print_date()
{
    static ofstream p_date;
    p_date.open("Record.txt", ios::out | ios::app);
    if(p_date.is_open())
    {
        p_date<<"\n\n";
        p_date<<"Total number of vehicles: "<<tollbooth::num_vehicles<<"\n";
        p_date<<"Total cash collected: Rs."<<tollbooth::total_cash<<"\n\n\n\n";

        static int cnt_date=1;
        p_date<<"DATE: "<<cnt_date<<" APRIL, 2018"<<"\n\n";
        cnt_date++;
        p_date.close();
    }
    else
    {
        cout<<"Unable to open file."<<endl;
        exit(1);
    }








}
int main()
{
    tollbooth o1;
    HOME:
        system("cls");

        cout<<setw(120)<<setfill('>')<<""<<endl;
        cout<<setw(120)<<setfill('>')<<""<<endl;
        cout<<setw(65)<<setfill(' ')<<"TOLL PLAZA SYSTEM"<<endl;
        cout<<setw(75)<<setfill(' ')<<"Designed by: Aoihik Pramanik"<<endl<<endl;
        cout<<setw(120)<<setfill('>')<<""<<endl;
        cout<<setw(120)<<setfill('>')<<""<<endl;

        char choice;

        cout<<endl;
        cout<<"1.FARE DETAILS"<<endl;
        cout<<"2.LIST OF EXEMPTED VEHICLES"<<endl;
        cout<<"3.START NEW DAY"<<endl;
        cout<<"4.NEW VEHICLE"<<endl;
        cout<<"5.CLEAR RECORD"<<endl;
        cout<<"6.PRINT RECORD"<<endl;
        cout<<"7.EXIT"<<endl;
        choice=getch();
        switch(choice)
        {
            case '1':    system("cls");
                        static string line1;
                        static ifstream filein1;

                        filein1.open("Fare.txt");
                        if(filein1.is_open())
                        {
                            while(getline(filein1,line1))
                            {
                                cout<<line1<<endl;
                            }
                            filein1.close();

                            cout<<endl<<endl<<endl;
                            cout<<"1.Home Page"<<endl;
                            cout<<"2.Exit"<<endl;
                            char choice1;
                            choice1=getch();
                            switch(choice1)
                            {
                                case '1': goto HOME;
                                break;
                                case '2': exit(0);
                            }

                        }
                        else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                        break;

            case '2':    system("cls");
                        static string line2;
                        static ifstream filein2;

                        filein2.open("Exempted_Vehicles.txt");
                        if(filein2.is_open())
                        {
                            while(getline(filein2,line2))
                            {
                                cout<<line2<<endl;
                            }
                            filein2.close();

                            cout<<endl<<endl<<endl;
                            cout<<"1.Home Page"<<endl;
                            cout<<"2.Exit"<<endl;
                            char choice1;
                            choice1=getch();
                            switch(choice1)
                            {
                                case '1': goto HOME;
                                break;
                                case '2': exit(0);
                            }
                        }
                        else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                        break;

            case '3' :
                                print_date();
                                o1.newday();
                                goto HOME;
                                break;

            case '4' : system("cls");

                       cout<<setw(120)<<setfill('>')<<""<<endl;
                        cout<<setw(120)<<setfill('>')<<""<<endl;
                        cout<<setw(65)<<setfill(' ')<<"TOLL PLAZA SYSTEM"<<endl;
                        cout<<setw(75)<<setfill(' ')<<"Designed by: Aoihik Pramanik"<<endl<<endl;
                        cout<<setw(120)<<setfill('>')<<""<<endl;
                        cout<<setw(120)<<setfill('>')<<""<<endl;
                        cout<<endl;

                        static string line3;
                        static ifstream filein3;

                        filein3.open("Fare.txt");
                        if(filein3.is_open())
                        {
                            while(getline(filein3,line3))
                            {
                                cout<<line3<<endl;
                            }
                            filein3.close();

                            cout<<endl;
                            cout<<setw(120)<<setfill('>')<<""<<endl;
                            cout<<setw(120)<<setfill('>')<<""<<endl<<endl;


                            char cat, jtype;
                            cout<<"Enter vehicle category: ";
                            cat=getche();
                            cout<<endl<<"Enter journey type (1.Single 2.Return 3.Monthly Pass): ";
                            jtype=getche();
                            tollbooth obj(cat, jtype);
                            generate_receipt();
                            cout<<endl<<endl<<endl;
                            cout<<"1.Home Page"<<endl;
                            cout<<"2.Exit"<<endl;
                            char choice1;
                            choice1=getch();
                            switch(choice1)
                            {
                                case '1': goto HOME;
                                break;
                                case '2': exit(0);
                            }

                        }
                        else
                        {
                            cout<<"Unable to open 'Fare Details' data file."<<endl;
                            exit(1);
                        }
                        break;
                case '5': system("cls");
                          cout<<"Are you sure you want to clear all system records?"<<endl;
                          cout<<"1.YES"<<endl;
                          cout<<"2.NO"<<endl;
                          char chc;
                          chc=getch();
                          switch(chc)
                          {
                              case '1':  static ofstream clearr;
                                         clearr.open("Record.txt", ios::out);
                                         clearr.close();
                                         goto HOME;
                                         break;

                              case '2': goto HOME;
                                        break;
                          }
                          break;
                case '6': system("cls");
                            static string line_by_line;
                            static ifstream print_rec;
                            print_rec.open("Record.txt");
                            if(print_rec.is_open())
                            {
                                while(getline(print_rec,line_by_line))
                                {
                                    cout<<line_by_line<<endl;
                                }
                                print_rec.close();
                            cout<<endl<<endl<<endl;
                            cout<<"1.Home Page"<<endl;
                            cout<<"2.Exit"<<endl;
                            char choice1;
                            choice1=getch();
                            switch(choice1)
                            {
                                case '1': goto HOME;
                                break;
                                case '2': exit(0);
                            }
                            }
                        else
                        {
                            cout<<"Unable to open file."<<endl;
                            exit(1);
                        }
                        break;

                    case '7': exit(0);
                                break;
        }





 return 0;
}
