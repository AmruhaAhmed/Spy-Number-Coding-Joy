        #include<iostream>
        using namespace std;
        int sum(int n)
            {
                int s=0;//sum 
                while(n!=0)
                {
                    int rem=n%10;//extracting the last digit of n
                    s=s+rem;//calculating sum
                    n=n/10;//updating n
                }
                return s;
            }
            int product(int n)
            {
                int p=1;//product
                while(n!=0)
                {
                    int rem=n%10;//extracting the last digit of n
                    p=p*rem;//calculating product
                    n=n/10;//updating n
                }
                return p;
            }
            int main()
            {
                int n,s,p;//n- number
                cout<<"\n"<<"Enter a number:";
                cin>>n;
                p=product(n);//storing value of product() in p
                s=sum(n);//storing value of sum() in s
                if(p==s)//checking condition for spy number
                cout<<n<<" is a Spy Number";
                else
                cout<<n<<" is not a Spy Number";
                return 0;
            }



