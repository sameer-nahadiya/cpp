int main() { 

    int num,NUM1,sum=0;
    cin>>num;
    while(num>0)
    {
     NUM1=num%10;   
     sum=sum+NUM1;
     num=num/10;
    }
    cout<<sum<<endl;
    return 0;
}