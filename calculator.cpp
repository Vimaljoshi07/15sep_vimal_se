#include<iostream>
using namespace std;
class calculator
{
	float a,b;
public:
         void result ()
        {
            cout<<"enter the first number:";
            cin>>a;
            cout<<"enter the second number:";
            cin>>b;
        }    
            float add()
            {
              return   a+b;
            }
            float sub()
            {
               return  a-b;
            }
            float mul()
            {
               return a*b;
            }
            float div()
            {
                if (b == 0)
                {
                    cout << "division by 0" <<
                    endl;
                    return 0;
                }
                else
                {
                  return  a/b;
                }
            }
};
            
        
        
        
        int main()
        {
            int ch;
            calculator c;
            cout<<"enter 1 to addtion of 2 number:"<<
                "\n enter 2 to substraction of 2 number:"<<
                "\n enter 3 to multiplication to 2 numbr:"<<
                "\n enter 4 to division of 2 num:"<<
                "\n enter o to exit";
                
                
            do
            {
                cout<<"\n enter choice:";
                cin>>ch;
                switch(ch)
                {
                    case 1:
                    c.result();
                    cout<<"result:"<<
                    c.add() <<endl;
                    break;
                    
                    case 2:
                    c.result();
                    cout<<"result:"<<
                        c.sub()<<endl;
                    break;
                    
                    case 3:
                    c.result();
                        cout<<"result:"<<
                        c.mul()<<endl;
                    break;
                    case 4:
                    c.result();
                        cout<<"result:"<<
                        c.div()<<endl;
                     break;
                
                }
            }   while (ch >=1 && ch <=4);
                
                return 0;
                
        }   
        
      
                
                        
                
                
                
                
                
                
                
                
                
                
            
    

