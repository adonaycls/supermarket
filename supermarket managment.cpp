#include <iostream>
#include <stdlib.h>

using namespace std;
//struct start//
struct product_info{
string id;
int exp_date[10];
float price;

};

struct supermarket_info
{
string name,location,description,phone_number;
};

struct employe_info{
string manager,product_manager,sales;
};
struct login{
string manager_id,manager_password,product_manager_id,product_manager_password,sales_id,sales_password;
};
//function start//

void home_menu(string company_name)
{

 cout <<"\t |welcome to"<<" "<<company_name<< " supermarket management system"<<"| \n \t "<<"\t "<<"\t chose your job sector "<<"\n\t1) Manager login \n"<<"\t2) product manager login \n"<<"\t3) sales login \n"<<"\t4) exit \n";

}
float manager_login(string try_m_id,string try_m_password,string password_m,string id_m)
{
    cout<<"\n\tmanager id :";
    cin>>try_m_id;
     cout<<"\n\tmanager password :";
    cin>>try_m_password;
    //password and id checker
        if((try_m_password==password_m)&&(try_m_id==id_m))
        {
            system("cls");
        cout<<"\tcorrect pass and id";
        }
    else
        {
        system("cls");
        return manager_login(try_m_id,try_m_password,password_m,id_m);
        }

}
//function end//
int main ()
{
    //struct prototyping
    supermarket_info supermarket_info;
    product_info product_info;
    employe_info employe_info;
    login login;
//first page info collection
cout<<"\t \t Hi insert supermarket information to continue\n"<<"\tsupermarket name\n";
getline(cin,supermarket_info.name);
cout<<"\t supermarket location\n";
getline(cin,supermarket_info.location);
cout<<"\t supermarket phone number\n";
getline(cin,supermarket_info.phone_number);
cout<<"\t description about the super market \n";
getline(cin,supermarket_info.description);
//manager info
cout<<"\t Manger/CEO/ name \n";
getline(cin,employe_info.manager);
cout<<employe_info.manager<<" Create login id without space : ";
getline(cin,login.manager_id);
cout<<employe_info.manager<<" Create password without space : ";
getline(cin,login.manager_password);
//product manager info
cout<<"\t product manager name \n";
getline(cin,employe_info.product_manager);
cout<<employe_info.product_manager<<" Create login id ";
getline(cin,login.product_manager_id);
cout<<employe_info.product_manager<<" Create password ";
getline(cin,login.product_manager_password);
//sales person information
cout<<"\t Sales person name \n";
getline(cin,employe_info.sales);
cout<<employe_info.sales<<" Create login id ";
getline(cin,login.sales_id);
cout<<employe_info.sales<<" Create password ";
getline(cin,login.sales_password);
//home menu
int choice ;
char goback;
string company_name= supermarket_info.name;
//for manager login//
string try_m_id,try_m_password;
string password_m = login.manager_password;
string id_m = login.manager_id;
system("cls");
home_menu(company_name);

cin>>choice;
     if(choice==1)
manager_login(try_m_id,try_m_password,password_m,id_m);

 else if(choice==2)
cout<<"wow ferenj";
//     product_manager_login(try_pm_id,try_pm_password,password_pm,id_pm);
else if(choice==3)
    cout<<"wow ferenj";
// sales_login(try_s_id,try_s_password,password_s,id_s);
else if(choice==4)
system("exit");
else

cout<<"wrong input/n";
    system("cls");
    home_menu(company_name);


}
