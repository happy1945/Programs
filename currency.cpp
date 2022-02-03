#include<iostream>
using namespace std;
int main(){
    int value;
   float num,conv;
    cout<<"welcome to rupee Currency convertor"<<endl;
    cout<<"...$$$$$$$$$$$$$$$$$$$$$$...."<<endl;
    cout<<"\n";
    cout<<"enter 1 for dollar conversion"<<endl;
    cout<<"enter 2 for euro conversion"<<endl;
    cout<<"enter 3 for yen conversion"<<endl;
    cout<<"enter 4 for renminbi conversion"<<endl;
    cout<<"enter 5 for  Shri lankan conversion"<<endl;
    cout<<"enter 6 for singapore dollar conversion"<<endl;
    cout<<"enter 7 for australian dollar conversion"<<endl;
    cout<<"enter 8 for pound sterling conversion"<<endl;
    cout<<"enter 9 for  Philippine peso conversion"<<endl;
    cout<<"enter 10 for dirham conversion"<<endl;
    cout<<"enter 11 for taiwan dollar conversion"<<endl;
    cout<<"enter 12 for Afghan afghani conversion"<<endl;
    cout<<"enter 13 for pakistani rupee conversion"<<endl;
    cout<<"enter 14 for bangladeshi taka conversion"<<endl;
    cout<<"enter 15 for Bhutan Ngultrum conversion"<<endl;
    cout<<"enter 16 for malaysian ringgit conversion"<<endl;
    cout<<"enter 17 for Nepalese rupee conversion"<<endl;
    cout<<"enter 18 for Kuwaiti dinar conversion"<<endl;
    cout<<"enter 19 for Indonesian rupiah conversion"<<endl;
    cout<<"enter 20 for Myanmar currency conversion"<<endl;
    cout<<".......$$$$$$$$$$$$$$$$$$$$$$$$$........"<<endl;
    cout<<"enter your choice :";
    cin>>value;
    switch(value){
        case 1:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*74.74;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

        case 2:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*84.39;
        cout<<conv<<" Indian Rupee"<<endl;

        break;
      
        case 3:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*0.66;
        cout<<conv<<" Indian Rupee"<<endl;
      
        break;

        case 4:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*11.81;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 5:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*0.37;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 6:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*55.64;
        cout<<conv<<" Indian Rupee"<<endl;
        break;


      
        case 7:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*53.45;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 8:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*100.79;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 9:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*1.46;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 10:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*20.36;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 11:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*2.70;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 12:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*0.71;
        cout<<conv<<" Indian Rupee"<<endl;
        break;
      
        case 13:

        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*0.42;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 14:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*0.87;
        cout<<conv<<" Indian Rupee"<<endl;
        break;

      
        case 15:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*1.00;
        cout<<conv<<" Indian Rupee"<<endl;
    
        break;

      
        case 16:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*17.83;
        cout<<conv<<" Indian Rupee"<<endl;

        break;  
        case 17:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*0.63;
        cout<<conv<<" Indian Rupee"<<endl;
        
        break;

      
        case 18:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*247.29;
        cout<<conv<<" Indian Rupee"<<endl;
        
        break;

      
        case 19:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*0.0052;
        cout<<conv<<" Indian Rupee"<<endl;
       
        break;

      
        case 20:
        cout<<"enter the amount"<<endl;
        cin>>num;
        conv=num*0.042;
        cout<<conv<<" Indian Rupee"<<endl;
       
        break;

        default :
        cout<<"wrong input"<<endl; 
        break;

    }
    cout<<"Thanks for using this calculator"<<endl;
    cout<<"Have a nice day!!!"<<endl;
    return 0;
}