#include<iostream>
using namespace std;
class Calculator{
    public:
        void Function(){
            int x;
            int y;
            char choice;
            char op;
            do{
                cout<<"Enter your value of x:";
                cin>>x;
                cout<<"Enter your value of y:";
                cin>>y;
                cout<<"Enter your operation:";
                cin>>op;
                switch(op){
                    case '+':
                        cout<<"Result:"<<x+y;
                        break;
                    case '-':
                        cout<<"Result:"<<x-y;
                        break;
                    case '*':
                        cout<<"Result:"<<x*y;
                        break;
                    case '/':
                        if(y!=0){
                            cout<<"Result:"<<x/y;
                        }
                        else{
                            cout<<"can't be performed divisible!";
                        }
                        break;
                    case '%':
                        if(y!=0){
                            cout<<"Result:"<<x%y;
                        }
                        else{
                            cout<<"can't be performed modulo";
                        }
                        break;
                    default:
                        cout<<"Invallid operation!";
                }
                cout<<endl<<"Do you want to try again? (y/n): ";
                cin >> choice;
            }while(choice=='Y'||choice=='y');
            cout<<"Discontinue!";
        }
};
int main(){
    Calculator Obj;
    Obj.Function();

}