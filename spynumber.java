import java.util.*;
class spynumber
{
    Scanner ob=new Scanner(System.in);
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
    void main()
    {
        int n,sum,product;//n- number
        System.out.print("Enter a number:");
        n=ob.nextInt();
        product=product(n);//storing value of product() in product
        sum=sum(n);//storing value of sum() in sum
        if(product==sum)//checking condition for spy number
        System.out.println(n+" is a Spy Number");
        else
        System.out.println(n+" is not a Spy Number");
    }
}

        
        
        
        
        
    

