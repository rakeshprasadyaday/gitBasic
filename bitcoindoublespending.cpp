#include<cstdlib>
#include<iostream>
using namespace std;

class bitcoin{
public:
int x,token;
bitcoin(){
x=982;
}
public:
int checktransaction(int token);
};
int bitcoin::checktransaction(int token)
{
if(x==token)
{
 cout<<"you are not allowed for transaction"<<endl;
 return 3;
}
else{
cout<<"your transaction is being processed"<<endl;
}
return 0;

}


int main()
{
int t;
bitcoin a;
cout<<"Enter token number "<<endl;
cin>>t;
//a.token=t;
if(a.checktransaction(t)==3)
{
system("pause");
}
return 0;
}

