#include <iostream>

using namespace std;
int retint(char rom[],int len)
{   int num=0,i;
    for(i=0;i<len;i++)
    {
        switch(rom[i])
        {   case 'I':   
                        if(rom[i+1]=='V')
                        {   num+=4;    
                            i+=1;
                        }
                        else if(rom[i+1]=='X')
                        {   num+=9;
                            i+=1;
                           
                        }
                        else
                        {   num+=1;
                            
                        }
                        break;
            case 'V':
                        num+=5;
                        break;
            case 'X':
                       if(rom[i+1]=='L')
                       {    num+=40;
                            i+=1;
                       }
                       else if(rom[i+1]=='C')
                       {   
                            num+=90;
                            i+=1;
                       }
                       else 
                       {    num+=10;
                           
                       }
                       break;
            case 'L':
                        num+=50;
                        break;
            case 'C':
                       if(rom[i+1]=='D')
                       {    num+=400;
                            i+=1;
                       }
                       else if(rom[i+1]=='M')
                       {    num+=900;
                            i+=1;
                       }
                       else
                       {    num+=100;
                       }
                       break;
            case 'D':
                        num+=500;
                        break;
            case 'M':
                        num+=1000;
                        break;
        }
                    
    }
    return num;
}
int main()
{
    int len,num=0;
    cout<<"Enter the length of the roman numeral: ";
    cin>>len;
    char rom[len];
    cout<<"\n Enter the roman numeral: ";
    for(int i=0;i<len;i++)
    {   cin>>rom[i];    }
    num=retint(rom,len);
    
    
    cout<<"\n The integer equivalent of the given roman numeral is: "<<num;
}
