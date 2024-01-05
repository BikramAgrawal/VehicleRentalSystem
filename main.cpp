#include <iostream>
#include<fstream>
#include<string>


using namespace std;

void admin_menu();
void add_vehicle();
void delete_vehicle();
void display();
int main()
{
    admin_menu();
    return 0;
}

void admin_menu()
{
    int choice;
    cout<<("\n1.New Admin \n2.Add vehicles \n3.Delete Vehicles \n4.Display \n5.Back\n");
    cout<<("\nEnter your choice:");
    cin>>choice;
    //if(choice==1)
  //  {
  //     new_admin();
 //   }
     if(choice==2)
     {
         add_vehicle();

     }
     else if (choice==3)
    {
         delete_vehicle();
     }
     else if(choice==4)
     {
           display();
     }
   //  else if(choice==5)
   //  {
   //     menu();
   //  }
     else
         printf("Wrong Choice!!!!");
}

void add_vehicle()
{
    //need to fix the size of the inputs
    fstream out("data.txt",ios::out|ios::app);
    string type,trans,model,cap,fare,id,number;
    cout<<"Vehicle ID:";
    cin>>id;
    cout<<"vehicle Type:";
    cin>>type;
    cout<<"Vehicle Number:";
    cin>>number;
    cout<<"Model No:";
    cin>>model;
    cout<<"Capacity:";
    cin>>cap;
    cout<<"Fare:";
    cin>>fare;
    cout<<"Tansmission:";
    cin>>trans;
    out<<id<<"\t\t"<<type<<"\t\t"<<number<<"\t\t"<<model<<"\t\t"<<cap<<"\t\t"<<fare<<"\t\t"<<trans<<endl;
    out.close();

}

void display()
{
    int dis;
    string read;
    cout<<"\n1.Display Data \n2.Display Available Vehicles\n";
    cout<<"Enter your choice:";
    cin>>dis;
    if(dis==1)
    {
        cout<<"\nVehicle Id"<<"\t"<<"Vehicle Type"<<"\t"<<"Vehicle Number"<<"\t"<<"Model Number"<<"\t"<<"Capacity"<<"\t"<<"Fare"<<"\t"<<"Transmission"<<endl ;
        fstream in("data.txt",ios::in);
        while(in.eof()==0)
        {
            getline(in,read);
            cout<<"\n"<<read<<endl;

        }
        in.close();
    }
  //  else if(dis==2)
 //   {

  //  }
    else
        printf("Wrong Choice!!!!");
}

void delete_vehicle()
{
    











}

