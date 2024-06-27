#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string username,email,password;
    string searchname,searchpassword,searchemail;
    fstream file;
public:
    void login();
    void signup();
    void forget();

}obj;
int main(){
        char choice;
        while(true){
            cout<<"\n1- Login";
            cout<<"\n2- Signup";
            cout<<"\n3- Forget Password";
            cout<<"\n4- Exit";
            cout<<"\nEnter your choice:";
            cin>> choice;
            cin.ignore();
            

            switch (choice){
             case '1':
                obj.login();

                break;

             case '2':
                obj.signup();

                break;

             case '3':
                obj.forget();

                break;

             case '4':
                return 0;


                break;

             default :
                cout<< "Invalid selection!"<<endl;
            }


        }
        


}
void temp :: signup(){
    cout<<"\nEnter your name:"<<endl;
    getline(cin,username);
    cout<<"\nEnter your Email Address:";
    getline(cin,email);
    cout<<"\nEnter password";
    getline(cin,password);

    file.open("logindata.txt",ios:: out| ios:: app);
    file<<username<<"*"<<email<<"*"<<password<<endl;
    file.close();
    cout<< "signup successful"<<endl;


}
void temp:: login(){
    
    cout<< "Enter your username:"<<endl;
    getline(cin,searchname);

    cout<<"Enter your password:"<<endl;
    getline(cin,searchpassword);
    file.open("logindata.txt",ios:: in);
    bool found=false;
    while( getline(file,username,'*')&&
    getline(file,email,'*')&&
    getline(file,password,'\n')){

        if(username==searchname ){
            found=true;
            if(password==searchpassword){
                cout<<"\n Account Login Successful"<<endl;
                cout<<"\nUsername:"<<username<<endl;
                cout<<"\nEmail:"<<email<<endl;


            }
            else{
                cout<<"password is incorrect"<<endl;

            }
            break;//exit loop once user is found
        }
    }
    if(!found){
        cout<<"username not found"<<endl;
    }
    
    file.close();

}
//searchname  is taken from user

void temp:: forget(){
    cout<<"\nenter your username"<<endl;
    getline(cin,searchname);
    cout<<"\n Enter your email"<<endl;
    getline(cin,searchemail);
    file.open("logindata.txt",ios:: in);
    bool found=false;
    while(getline(file,username,'*')&&
    getline(file,email,'*')&&
    getline(file,password,'\n')){
    
   
        if(username==searchname &&email==searchemail){
            found=true;
            cout<<"account found"<<endl;
            cout<<"yourpassword"<<password;
            break;


        }
    }
    if(!found){
       
            cout<< "not found"<<endl;
    }
    
    file.close();

        


}
