#include<iostream>
#include<stdlib.h>


using namespace std;

struct carrom
{

char p;
int w;
int b;
int r;

};

int main()
{

int i=0,sum=0,sumOfW=0,sumOfB=0;
carrom carr[10];
char c;
//for input value in struct array
while(getchar()!='#')
{

cin>>carr[i].p>>carr[i].w>>carr[i].b>>carr[i].r;
i++;

sumOfW+=carr[i].w;
sumOfB+=carr[i].b;

}



//comparison of sum of the value
if(sumOfW==9 || sumOfB==9)
{
if(sumOfW>sumOfB)
{

sum=sumOfW-sumOfB+5;
}

else
{
sum=sumOfB-sumOfW+5;

}


}

else
{
cout<<"Incomplete"<<endl;
}

int j=0;
while(j<i)
{

if(carr[i].r==5)
{
if(carr[i].p=='A' || carr[i].p=='C')
{
 cout<<"Team1 wins with point"<<sum<<endl;


}
else
{
cout<<"Team 2 wins with point"<<sum<<endl;
}

}
}

return 0;
}
